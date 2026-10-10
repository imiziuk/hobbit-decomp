
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00815d90 == 1) {
    FUN_006c6a6b();
  }
  FUN_006c6aa4(param_1);
  (*(code *)PTR___exit_00757e74)(0xff);
  return;
}

