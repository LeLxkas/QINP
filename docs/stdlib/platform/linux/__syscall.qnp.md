
# Stdlib - stdlib/platform/linux/__syscall.qnp

## Overview
 - [Functions](#functions)
 - [Macros](#macros)


## Functions
 - [u64 std.__syscall(u64 num)]()
 - [u64 std.__syscall(u64 num, u64 rdi)]()
 - [u64 std.__syscall(u64 num, u64 rdi, u64 rsi)]()
 - [u64 std.__syscall(u64 num, u64 rdi, u64 rsi, u64 rdx)]()

## Macros
 - [std.__SYS_ACCEPT]()
 - [std.__SYS_ACCEPT4]()
 - [std.__SYS_ACCESS]()
 - [std.__SYS_ACCT]()
 - [std.__SYS_ADD_KEY]()
 - [std.__SYS_ADJTIMEX]()
 - [std.__SYS_AFS___SYSCALL]()
 - [std.__SYS_ALARM]()
 - [std.__SYS_ARCH_PRCTL]()
 - [std.__SYS_BIND]()
 - [std.__SYS_BRK]()
 - [std.__SYS_CAPGET]()
 - [std.__SYS_CAPSET]()
 - [std.__SYS_CHDIR]()
 - [std.__SYS_CHMOD]()
 - [std.__SYS_CHOWN]()
 - [std.__SYS_CHROOT]()
 - [std.__SYS_CLOCK_ADJTIME]()
 - [std.__SYS_CLOCK_GETRES]()
 - [std.__SYS_CLOCK_GETTIME]()
 - [std.__SYS_CLOCK_NANOSLEEP]()
 - [std.__SYS_CLOCK_SETTIME]()
 - [std.__SYS_CLONE]()
 - [std.__SYS_CLOSE]()
 - [std.__SYS_CONNECT]()
 - [std.__SYS_CREAT]()
 - [std.__SYS_CREATE_MODULE]()
 - [std.__SYS_DELETE_MODULE]()
 - [std.__SYS_DUP]()
 - [std.__SYS_DUP2]()
 - [std.__SYS_DUP3]()
 - [std.__SYS_EPOLL_CREATE]()
 - [std.__SYS_EPOLL_CREATE1]()
 - [std.__SYS_EPOLL_CTL]()
 - [std.__SYS_EPOLL_CTL_OLD]()
 - [std.__SYS_EPOLL_PWAIT]()
 - [std.__SYS_EPOLL_WAIT]()
 - [std.__SYS_EPOLL_WAIT_OLD]()
 - [std.__SYS_EVENTFD]()
 - [std.__SYS_EVENTFD2]()
 - [std.__SYS_EXECVE]()
 - [std.__SYS_EXIT]()
 - [std.__SYS_EXIT_GROUP]()
 - [std.__SYS_FACCESSAT]()
 - [std.__SYS_FADVISE64]()
 - [std.__SYS_FALLOCATE]()
 - [std.__SYS_FANOTIFY_INIT]()
 - [std.__SYS_FANOTIFY_MARK]()
 - [std.__SYS_FCHDIR]()
 - [std.__SYS_FCHMOD]()
 - [std.__SYS_FCHMODAT]()
 - [std.__SYS_FCHOWN]()
 - [std.__SYS_FCHOWNAT]()
 - [std.__SYS_FCNTL]()
 - [std.__SYS_FDATASYNC]()
 - [std.__SYS_FGETXATTR]()
 - [std.__SYS_FINIT_MODULE]()
 - [std.__SYS_FLISTXATTR]()
 - [std.__SYS_FLOCK]()
 - [std.__SYS_FORK]()
 - [std.__SYS_FREMOVEXATTR]()
 - [std.__SYS_FSETXATTR]()
 - [std.__SYS_FSTAT]()
 - [std.__SYS_FSTATFS]()
 - [std.__SYS_FSYNC]()
 - [std.__SYS_FTRUNCATE]()
 - [std.__SYS_FUTEX]()
 - [std.__SYS_FUTIMESAT]()
 - [std.__SYS_GETCPU]()
 - [std.__SYS_GETCWD]()
 - [std.__SYS_GETDENTS]()
 - [std.__SYS_GETDENTS64]()
 - [std.__SYS_GETEGID]()
 - [std.__SYS_GETEUID]()
 - [std.__SYS_GETGID]()
 - [std.__SYS_GETGROUPS]()
 - [std.__SYS_GETITIMER]()
 - [std.__SYS_GETPEERNAME]()
 - [std.__SYS_GETPGID]()
 - [std.__SYS_GETPGRP]()
 - [std.__SYS_GETPID]()
 - [std.__SYS_GETPMSG]()
 - [std.__SYS_GETPPID]()
 - [std.__SYS_GETPRIORITY]()
 - [std.__SYS_GETRESGID]()
 - [std.__SYS_GETRESUID]()
 - [std.__SYS_GETRLIMIT]()
 - [std.__SYS_GETRUSAGE]()
 - [std.__SYS_GETSID]()
 - [std.__SYS_GETSOCKNAME]()
 - [std.__SYS_GETSOCKOPT]()
 - [std.__SYS_GETTID]()
 - [std.__SYS_GETTIMEOFDAY]()
 - [std.__SYS_GETUID]()
 - [std.__SYS_GETXATTR]()
 - [std.__SYS_GET_KERNEL_SYMS]()
 - [std.__SYS_GET_MEMPOLICY]()
 - [std.__SYS_GET_ROBUST_LIST]()
 - [std.__SYS_GET_THREAD_AREA]()
 - [std.__SYS_INIT_MODULE]()
 - [std.__SYS_INOTIFY_ADD_WATCH]()
 - [std.__SYS_INOTIFY_INIT]()
 - [std.__SYS_INOTIFY_INIT1]()
 - [std.__SYS_INOTIFY_RM_WATCH]()
 - [std.__SYS_IOCTL]()
 - [std.__SYS_IOPERM]()
 - [std.__SYS_IOPL]()
 - [std.__SYS_IOPRIO_GET]()
 - [std.__SYS_IOPRIO_SET]()
 - [std.__SYS_IO_CANCEL]()
 - [std.__SYS_IO_DESTROY]()
 - [std.__SYS_IO_GETEVENTS]()
 - [std.__SYS_IO_SETUP]()
 - [std.__SYS_IO_SUBMIT]()
 - [std.__SYS_KCMP]()
 - [std.__SYS_KEXEC_LOAD]()
 - [std.__SYS_KEYCTL]()
 - [std.__SYS_KILL]()
 - [std.__SYS_LCHOWN]()
 - [std.__SYS_LGETXATTR]()
 - [std.__SYS_LINK]()
 - [std.__SYS_LINKAT]()
 - [std.__SYS_LISTEN]()
 - [std.__SYS_LISTXATTR]()
 - [std.__SYS_LLISTXATTR]()
 - [std.__SYS_LOOKUP_DCOOKIE]()
 - [std.__SYS_LREMOVEXATTR]()
 - [std.__SYS_LSEEK]()
 - [std.__SYS_LSETXATTR]()
 - [std.__SYS_LSTAT]()
 - [std.__SYS_MADVISE]()
 - [std.__SYS_MBIND]()
 - [std.__SYS_MIGRATE_PAGES]()
 - [std.__SYS_MINCORE]()
 - [std.__SYS_MKDIR]()
 - [std.__SYS_MKDIRAT]()
 - [std.__SYS_MKNOD]()
 - [std.__SYS_MKNODAT]()
 - [std.__SYS_MLOCK]()
 - [std.__SYS_MLOCKALL]()
 - [std.__SYS_MMAP]()
 - [std.__SYS_MODIFY_LDT]()
 - [std.__SYS_MOUNT]()
 - [std.__SYS_MOVE_PAGES]()
 - [std.__SYS_MPROTECT]()
 - [std.__SYS_MQ_GETSETATTR]()
 - [std.__SYS_MQ_NOTIFY]()
 - [std.__SYS_MQ_OPEN]()
 - [std.__SYS_MQ_TIMEDRECEIVE]()
 - [std.__SYS_MQ_TIMEDSEND]()
 - [std.__SYS_MQ_UNLINK]()
 - [std.__SYS_MREMAP]()
 - [std.__SYS_MSGCTL]()
 - [std.__SYS_MSGGET]()
 - [std.__SYS_MSGRCV]()
 - [std.__SYS_MSGSND]()
 - [std.__SYS_MSYNC]()
 - [std.__SYS_MUNLOCK]()
 - [std.__SYS_MUNLOCKALL]()
 - [std.__SYS_MUNMAP]()
 - [std.__SYS_NAME_TO_HANDLE_AT]()
 - [std.__SYS_NANOSLEEP]()
 - [std.__SYS_NEWFSTATAT]()
 - [std.__SYS_NFSSERVCTL]()
 - [std.__SYS_OPEN]()
 - [std.__SYS_OPENAT]()
 - [std.__SYS_OPEN_BY_HANDLE_AT]()
 - [std.__SYS_PAUSE]()
 - [std.__SYS_PERF_EVENT_OPEN]()
 - [std.__SYS_PERSONALITY]()
 - [std.__SYS_PIPE]()
 - [std.__SYS_PIPE2]()
 - [std.__SYS_PIVOT_ROOT]()
 - [std.__SYS_POLL]()
 - [std.__SYS_PPOLL]()
 - [std.__SYS_PRCTL]()
 - [std.__SYS_PREAD64]()
 - [std.__SYS_PREADV]()
 - [std.__SYS_PRLIMIT64]()
 - [std.__SYS_PROCESS_VM_READV]()
 - [std.__SYS_PROCESS_VM_WRITEV]()
 - [std.__SYS_PSELECT6]()
 - [std.__SYS_PTRACE]()
 - [std.__SYS_PUTPMSG]()
 - [std.__SYS_PWRITE64]()
 - [std.__SYS_PWRITEV]()
 - [std.__SYS_QUERY_MODULE]()
 - [std.__SYS_QUOTACTL]()
 - [std.__SYS_READ]()
 - [std.__SYS_READAHEAD]()
 - [std.__SYS_READLINK]()
 - [std.__SYS_READLINKAT]()
 - [std.__SYS_READV]()
 - [std.__SYS_REBOOT]()
 - [std.__SYS_RECVFROM]()
 - [std.__SYS_RECVMMSG]()
 - [std.__SYS_RECVMSG]()
 - [std.__SYS_REMAP_FILE_PAGES]()
 - [std.__SYS_REMOVEXATTR]()
 - [std.__SYS_RENAME]()
 - [std.__SYS_RENAMEAT]()
 - [std.__SYS_REQUEST_KEY]()
 - [std.__SYS_RESTART___SYSCALL]()
 - [std.__SYS_RMDIR]()
 - [std.__SYS_RT_SIGACTION]()
 - [std.__SYS_RT_SIGPENDING]()
 - [std.__SYS_RT_SIGPROCMASK]()
 - [std.__SYS_RT_SIGQUEUEINFO]()
 - [std.__SYS_RT_SIGRETURN]()
 - [std.__SYS_RT_SIGSUSPEND]()
 - [std.__SYS_RT_SIGTIMEDWAIT]()
 - [std.__SYS_RT_TGSIGQUEUEINFO]()
 - [std.__SYS_SCHED_GETAFFINITY]()
 - [std.__SYS_SCHED_GETPARAM]()
 - [std.__SYS_SCHED_GETSCHEDULER]()
 - [std.__SYS_SCHED_GET_PRIORITY_MAX]()
 - [std.__SYS_SCHED_GET_PRIORITY_MIN]()
 - [std.__SYS_SCHED_RR_GET_INTERVAL]()
 - [std.__SYS_SCHED_SETAFFINITY]()
 - [std.__SYS_SCHED_SETPARAM]()
 - [std.__SYS_SCHED_SETSCHEDULER]()
 - [std.__SYS_SCHED_YIELD]()
 - [std.__SYS_SECURITY]()
 - [std.__SYS_SELECT]()
 - [std.__SYS_SEMCTL]()
 - [std.__SYS_SEMGET]()
 - [std.__SYS_SEMOP]()
 - [std.__SYS_SEMTIMEDOP]()
 - [std.__SYS_SENDFILE]()
 - [std.__SYS_SENDMMSG]()
 - [std.__SYS_SENDMSG]()
 - [std.__SYS_SENDTO]()
 - [std.__SYS_SETDOMAINNAME]()
 - [std.__SYS_SETFSGID]()
 - [std.__SYS_SETFSUID]()
 - [std.__SYS_SETGID]()
 - [std.__SYS_SETGROUPS]()
 - [std.__SYS_SETHOSTNAME]()
 - [std.__SYS_SETITIMER]()
 - [std.__SYS_SETNS]()
 - [std.__SYS_SETPGID]()
 - [std.__SYS_SETPRIORITY]()
 - [std.__SYS_SETREGID]()
 - [std.__SYS_SETRESGID]()
 - [std.__SYS_SETRESUID]()
 - [std.__SYS_SETREUID]()
 - [std.__SYS_SETRLIMIT]()
 - [std.__SYS_SETSID]()
 - [std.__SYS_SETSOCKOPT]()
 - [std.__SYS_SETTIMEOFDAY]()
 - [std.__SYS_SETUID]()
 - [std.__SYS_SETXATTR]()
 - [std.__SYS_SET_MEMPOLICY]()
 - [std.__SYS_SET_ROBUST_LIST]()
 - [std.__SYS_SET_THREAD_AREA]()
 - [std.__SYS_SET_TID_ADDRESS]()
 - [std.__SYS_SHMAT]()
 - [std.__SYS_SHMCTL]()
 - [std.__SYS_SHMDT]()
 - [std.__SYS_SHMGET]()
 - [std.__SYS_SHUTDOWN]()
 - [std.__SYS_SIGALTSTACK]()
 - [std.__SYS_SIGNALFD]()
 - [std.__SYS_SIGNALFD4]()
 - [std.__SYS_SOCKET]()
 - [std.__SYS_SOCKETPAIR]()
 - [std.__SYS_SPLICE]()
 - [std.__SYS_STAT]()
 - [std.__SYS_STATFS]()
 - [std.__SYS_SWAPOFF]()
 - [std.__SYS_SWAPON]()
 - [std.__SYS_SYMLINK]()
 - [std.__SYS_SYMLINKAT]()
 - [std.__SYS_SYNC]()
 - [std.__SYS_SYNCFS]()
 - [std.__SYS_SYNC_FILE_RANGE]()
 - [std.__SYS_TEE]()
 - [std.__SYS_TGKILL]()
 - [std.__SYS_TIME]()
 - [std.__SYS_TIMERFD_CREATE]()
 - [std.__SYS_TIMERFD_GETTIME]()
 - [std.__SYS_TIMERFD_SETTIME]()
 - [std.__SYS_TIMER_CREATE]()
 - [std.__SYS_TIMER_DELETE]()
 - [std.__SYS_TIMER_GETOVERRUN]()
 - [std.__SYS_TIMER_GETTIME]()
 - [std.__SYS_TIMER_SETTIME]()
 - [std.__SYS_TIMES]()
 - [std.__SYS_TKILL]()
 - [std.__SYS_TRUNCATE]()
 - [std.__SYS_TUXCALL]()
 - [std.__SYS_UMASK]()
 - [std.__SYS_UMOUNT2]()
 - [std.__SYS_UNAME]()
 - [std.__SYS_UNLINK]()
 - [std.__SYS_UNLINKAT]()
 - [std.__SYS_UNSHARE]()
 - [std.__SYS_USELIB]()
 - [std.__SYS_USTAT]()
 - [std.__SYS_UTIME]()
 - [std.__SYS_UTIMENSAT]()
 - [std.__SYS_UTIMES]()
 - [std.__SYS_VFORK]()
 - [std.__SYS_VHANGUP]()
 - [std.__SYS_VMSPLICE]()
 - [std.__SYS_VSERVER]()
 - [std.__SYS_WAIT4]()
 - [std.__SYS_WAITID]()
 - [std.__SYS_WRITE]()
 - [std.__SYS_WRITEV]()
 - [std.__SYS___SYSFS]()
 - [std.__SYS___SYSINFO]()
 - [std.__SYS___SYSLOG]()
 - [std.__SYS____SYSCTL]()

