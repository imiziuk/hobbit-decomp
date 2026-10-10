
void __thiscall FUN_00610840(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1[2] = param_2;
  param_1[5] = param_5;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if (*param_1 == 0) {
    uVar4 = FUN_0054bad0(0x2d,0,0);
    *(undefined8 *)(param_1 + 6) = uVar4;
    piVar1 = (int *)FUN_004021c0(uVar4);
    if (piVar1 != (int *)0x0) {
      FUN_00488c30(s_Beorn_Trap_Connector_00749280);
      (**(code **)(*piVar1 + 0x110))();
    }
    uVar4 = FUN_0054bad0(0x2d,0,0);
    *(undefined8 *)(param_1 + 8) = uVar4;
    piVar1 = (int *)FUN_004021c0(uVar4);
    uVar3 = extraout_ECX;
    if (piVar1 != (int *)0x0) {
      FUN_00488c30(s_Beorn_Trap_Connector_00749280);
      (**(code **)(*piVar1 + 0x110))();
      uVar3 = extraout_ECX_00;
    }
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f28f5c3;
    uVar5 = 0;
    FUN_00413480(0x99,0x66,0xff,0xff);
    iVar2 = FUN_005c1cf0(8,8,uVar3,uVar5,uVar6,uVar7,uVar8);
    param_1[0xc] = iVar2;
    FUN_005c2020(iVar2,0x3f400000,0x3f400000,1);
    FUN_005c2090(param_1[0xc],0);
    FUN_005c2070(param_1[0xc],s_FX_BeornBeam_xbmp_0071ef78,0x40800000);
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f28f5c3;
    uVar5 = 0;
    uVar3 = extraout_ECX_01;
    FUN_00413480(0,0x66,0xcc,0xff);
    iVar2 = FUN_005c1cf0(8,8,uVar3,uVar5,uVar6,uVar7,uVar8);
    param_1[0xd] = iVar2;
    FUN_005c2020(iVar2,0x3f28f5c3,0x3f28f5c3,1);
    FUN_005c2090(param_1[0xd],0);
    FUN_005c2070(param_1[0xd],s_FX_BeornBeam_xbmp_0071ef78,0x40400000);
  }
  *param_1 = 1;
  return;
}

