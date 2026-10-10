
void __fastcall FUN_004f8ec0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0065f190(s_hud__RenderScreenColorizer_0072f998);
  if (iVar1 != 0) {
    FUN_0066c3a0(3,0x31);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x1b,1);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,9);
    uVar2 = 1;
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,1);
    FUN_0066ddd0(uVar2);
    FUN_0066dfc0(0,0,0);
    FUN_0066dfc0(0,*(undefined4 *)(param_1 + 0x564),0);
    FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0);
    FUN_0066dfc0(0,0,0);
    FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0);
    FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),0,0);
    FUN_0066d9a0();
    FUN_0065f430();
  }
  return;
}

