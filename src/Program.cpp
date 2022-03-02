#include "Program.h"

#include "Errors/QinpError.h"

bool operator==(const Datatype& left, const Datatype& right)
{
	return left.ptrDepth == right.ptrDepth && left.name == right.name;
}

bool operator!=(const Datatype& left, const Datatype& right)
{
	return !(left == right);
}

bool operator!(const Datatype& datatype)
{
	return datatype.name.empty();
}

int getBuiltinTypeSize(const std::string& name)
{
	static const std::map<std::string, int> sizes =
	{
		{ "void", 0 },
		{ "bool", 1 },
		//{ "i8", 1 },
		//{ "i16", 2 },
		//{ "i32", 4 },
		//{ "i64", 8 },
		{ "u8", 1 },
		{ "u16", 2 },
		{ "u32", 4 },
		{ "u64", 8 },
		//{ "f32", 4 },
		//{ "f64", 8 },
	};

	auto it = sizes.find(name);
	return (it != sizes.end()) ? it->second : -1;
}

int getDatatypeSize(const Datatype& datatype)
{
	if (datatype.ptrDepth > 0)
		return sizeof(void*);

	int size = getBuiltinTypeSize(datatype.name);
	//for (int s : datatype.arraySizes)
	//	size *= s;

	return size;
}

int getDatatypePushSize(const Datatype& datatype)
{
	if (datatype.ptrDepth > 0)
		return sizeof(void*);
	
	if (getBuiltinTypeSize(datatype.name) > 0)
		return 8;

	// Return size for custom datatypes (packs)
	return -1;
}

std::string getMangledDatatype(const Datatype& datatype)
{
	return datatype.name + "~" + std::to_string(datatype.ptrDepth);
}

std::string getMangledSignature(const std::vector<ExpressionRef>& paramExpr)
{
	std::string signature;
	for (auto& expr : paramExpr)
		signature += "." + getMangledDatatype(expr->datatype);
	return signature;
}

std::string getMangledType(const Datatype& retType, const std::vector<Datatype>& paramTypes)
{
	std::string mangledType = getMangledDatatype(retType) + "#";

	for (auto& paramType : paramTypes)
		mangledType += "." + getMangledDatatype(paramType);

	return mangledType;
}

std::string getMangledType(const Datatype& retType, const std::vector<ExpressionRef>& paramExpr)
{
	return getMangledDatatype(retType) + "#" + getMangledSignature(paramExpr);
}

std::string getMangledType(const Datatype& retType, const std::vector<Variable>& params)
{
	std::string mangledType = getMangledDatatype(retType) + "#";

	for (auto& param : params)
		mangledType += "." + getMangledDatatype(param.datatype);

	return mangledType;
}

std::string getMangledType(const FunctionRef func)
{
	return getMangledType(func->retType, func->params);
}

std::string getSignatureFromMangledType(const std::string& mangledType)
{
	auto it = mangledType.find('#');
	return mangledType.substr(it + 1);
}

Datatype getDatatypeFromMangledType(std::string mangledType)
{
	mangledType = mangledType.substr(0, mangledType.find('#'));
	Datatype datatype;
	datatype.name = mangledType.substr(0, mangledType.find('~'));
	datatype.ptrDepth = std::stoi(mangledType.substr(mangledType.find('~') + 1));
	return datatype;
}

std::string StatementTypeToString(Statement::Type type)
{
	switch (type)
	{
	case Statement::Type::None: return "None";
	case Statement::Type::Return: return "Return";
	case Statement::Type::Assembly: return "Assembly";
	case Statement::Type::Expression: return "Expression";
	default: throw QinpError("Unknown statement type!");
	}
}

std::string ExpressionTypeToString(Expression::ExprType type)
{
	switch (type)
	{
	case Expression::ExprType::None: return "None";
	case Expression::ExprType::Conversion: return "Conversion";
	case Expression::ExprType::Assign: return "Assign";
	case Expression::ExprType::Assign_Sum: return "Assign_Sum";
	case Expression::ExprType::Assign_Difference: return "Assign_Difference";
	case Expression::ExprType::Assign_Product: return "Assign_Product";
	case Expression::ExprType::Assign_Quotient: return "Assign_Quotient";
	case Expression::ExprType::Assign_Remainder: return "Assign_Remainder";
	case Expression::ExprType::Assign_Bw_LeftShift: return "Assign_Bw_LeftShift";
	case Expression::ExprType::Assign_Bw_RightShift: return "Assign_Bw_RightShift";
	case Expression::ExprType::Assign_Bw_AND: return "Assign_Bw_AND";
	case Expression::ExprType::Assign_Bw_XOR: return "Assign_Bw_XOR";
	case Expression::ExprType::Assign_Bw_OR: return "Assign_Bw_OR";
	case Expression::ExprType::Logical_OR: return "Logical_OR";
	case Expression::ExprType::Logical_AND: return "Logical_AND";
	case Expression::ExprType::Bitwise_OR: return "Bitwise_OR";
	case Expression::ExprType::Bitwise_XOR: return "Bitwise_XOR";
	case Expression::ExprType::Bitwise_AND: return "Bitwise_AND";
	case Expression::ExprType::Comparison_Equal: return "Comparison_Equal";
	case Expression::ExprType::Comparison_NotEqual: return "Comparison_NotEqual";
	case Expression::ExprType::Comparison_Less: return "Comparison_Less";
	case Expression::ExprType::Comparison_LessEqual: return "Comparison_LessEqual";
	case Expression::ExprType::Comparison_Greater: return "Comparison_Greater";
	case Expression::ExprType::Comparison_GreaterEqual: return "Comparison_GreaterEqual";
	case Expression::ExprType::Shift_Left: return "Shift_Left";
	case Expression::ExprType::Shift_Right: return "Shift_Right";
	case Expression::ExprType::Sum: return "Sum";
	case Expression::ExprType::Difference: return "Difference";
	case Expression::ExprType::Product: return "Product";
	case Expression::ExprType::Quotient: return "Quotient";
	case Expression::ExprType::Remainder: return "Remainder";
	case Expression::ExprType::AddressOf: return "AddressOf";
	case Expression::ExprType::Dereference: return "Dereference";
	case Expression::ExprType::Logical_NOT: return "Logical_NOT";
	case Expression::ExprType::Bitwise_NOT: return "Bitwise_NOT";
	case Expression::ExprType::Prefix_Plus: return "Prefix_Plus";
	case Expression::ExprType::Prefix_Minus: return "Prefix_Minus";
	case Expression::ExprType::Prefix_Increment: return "Prefix_Increment";
	case Expression::ExprType::Prefix_Decrement: return "Prefix_Decrement";
	case Expression::ExprType::Subscript: return "Subscript";
	case Expression::ExprType::FunctionCall: return "FunctionCall";
	case Expression::ExprType::Suffix_Increment: return "Suffix_Increment";
	case Expression::ExprType::Suffix_Decrement: return "Suffix_Decrement";
	case Expression::ExprType::Literal: return "Literal";
	case Expression::ExprType::GlobalVariable: return "GlobalVariable";
	case Expression::ExprType::LocalVariable: return "LocalVariable";
	case Expression::ExprType::FunctionAddress: return "FunctionAddress";
	default: throw QinpError("Unknown expression type!");
	}
}