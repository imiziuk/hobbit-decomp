
void __fastcall FUN_0041df30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00448560();
  param_1[0x1660] = 0;
  param_1[0x1661] = 0;
  param_1[0x1662] = 0;
  param_1[0x1663] = 0;
  param_1[0x10d] = 0;
  uVar1 = extraout_ECX;
  if (DAT_00720088 != 0) {
    uVar1 = FUN_0054c5c0(0x30,s_C__projects_meridian_Support_Obj_007200c0,0x43d);
    lVar3 = FUN_0054c790();
    if (lVar3 != 0) {
      iVar2 = FUN_004021c0(lVar3);
      uStack_8 = *(undefined4 *)(iVar2 + 0xac);
      uStack_c = *(undefined4 *)(iVar2 + 0xa8);
      uStack_4 = *(undefined4 *)(iVar2 + 0xb0);
      (**(code **)(*param_1 + 0x14))(&uStack_c,0);
      FUN_00422f30(*(undefined4 *)(iVar2 + 0xb4));
    }
    FUN_0054c880(uVar1);
    param_1[0x1da] = 0;
    FUN_0044c810();
    param_1[0x1d2] = 0;
    param_1[0x272] = 0;
    param_1[0x273] = 0;
    param_1[0x1f1] = param_1[5];
    param_1[0x1f2] = param_1[6];
    param_1[499] = param_1[7];
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_007200c0,0x458);
    uVar1 = extraout_ECX_00;
  }
  uVar4 = 0x3f28f5c3;
  FUN_00406b70(0xff000000);
  FUN_004f8520(0,uVar1,uVar4);
  FUN_004f8640(0,0x3f28f5c3,0xff000000);
  return;
}

