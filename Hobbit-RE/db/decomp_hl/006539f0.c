
void __thiscall FUN_006539f0(int param_1,DWORD param_2)

{
  FUN_00653cf0();
  *(undefined4 *)(param_1 + 0x80) = 2;
  FUN_00653a80(*(undefined4 *)(param_1 + 0x54));
  FUN_00653d20();
                    /* WARNING: Subroutine does not return */
  ExitThread(param_2);
}

