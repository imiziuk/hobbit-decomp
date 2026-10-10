
void __fastcall FUN_006539d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x50),1,(LPLONG)0x0);
  return;
}

