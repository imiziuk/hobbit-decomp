
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c0a14(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_006c0ab9();
  if (DAT_00815d6c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00815d68 = 1;
  DAT_00815d64 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_008174b4 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_008174b0 - 4), DAT_008174b4 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_008174b4 <= puVar1);
    }
    FUN_006c0acb(&DAT_0071cc94,&DAT_0071cc9c);
  }
  FUN_006c0acb(&DAT_0071cca0,&DAT_0071cca8);
  if (param_3 == 0) {
    DAT_00815d6c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_006c0ac2();
  return;
}

