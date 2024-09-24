# Machine Problem 1

## I. Trace Code

### I.1 Halt

[Machine::Run()](machine/mipssim.cc#L54)
[Machine::OneInstruction()](machine/mipssim.cc#L122)
[Machine::RaiseException()](machine/machine.cc#97)
[ExceptionHandler()](userprog/exception.cc#L50)
[SysHalt()](userprog/ksyscall.h#L17)
[Interrupt::Halt()](machine/interrupt.cc#L228)

### I.2 Create File

[ExceptionHandler()](userprog/exception.cc#L50)
[SysCreate()](userprog/ksyscall.h#L31)
[FileSystem::Create()](filesys/filesys.cc#L174)

### I.3 Print Int

[ExceptionHandler()](userprog/exception.cc#L50)
[SysPrintInt()](userprog/ksyscall.h#L21)
[SynchConsoleOutput::PutInt()](userprog/synchconsole.cc#L100)
[SynchConsoleOutput::PutChar()](userprog/synchconsole.cc#L93)
[ConsoleOutput::PutChar()](machine/console.cc#L154)
[Interrupt::Schedule()](machine/interrupt.cc#L289)
[Machine::Run()](machine/mipssim.cc#L54)
[Interrupt::OneTick()](machine/interrupt.cc#L145)
[Interrupt::CheckIfDue()](machine/interrupt.cc#L311)
[ConsoleOutput::Callback()](machine/console.cc#L141)
[SynchConsoleOutput::Callback()](userprog/synchconsole.cc#L59)
