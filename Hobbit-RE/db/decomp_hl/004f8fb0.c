
void __fastcall FUN_004f8fb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  do {
    iVar1 = FUN_0065f190(s_hud__BlackOutScreen_0072f9b4);
    if (iVar1 != 0) {
      FUN_0066c3a0(3,0x31);
      FUN_0066ddd0(0xff000000);
      FUN_0066dfc0(0,0,0);
      FUN_0066dfc0(0,*(undefined4 *)(param_1 + 0x564),0);
      FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0);
      FUN_0066dfc0(0,0,0);
      FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0);
      FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),0,0);
      FUN_0066d9a0();
      FUN_0065f430();
    }
    FUN_0065f480();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

