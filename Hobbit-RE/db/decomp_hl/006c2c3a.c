
void FUN_006c2c3a(void)

{
  int iVar1;
  
  if (PTR_FUN_00757e28 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00757e28)();
  }
  iVar1 = FUN_006c3f43();
  if (iVar1 == 0) {
    __amsg_exit(0x10);
  }
  if (*(HANDLE *)(iVar1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
  }
  FUN_006c3faa(iVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}

