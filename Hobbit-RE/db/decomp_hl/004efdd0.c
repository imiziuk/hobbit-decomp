
void __thiscall FUN_004efdd0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  int local_11c;
  undefined4 local_118 [3];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_web_wall__OnImport_0072f130);
  local_4 = 0;
  FUN_006405b0(s_CommonTexture_0072ed30,(int *)(param_1 + 0x1f0));
  FUN_00640480(s_Texture_0072f128,local_10c);
  if (*(int *)(param_1 + 0x1f0) == 0) {
    uVar2 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar2 = FUN_005496c0(local_10c,&DAT_0071ef4c);
  }
  FUN_00549430(param_1 + 0x158,uVar2);
  FUN_00640450(s_BlendMode_0072f11c,local_118);
  *(undefined4 *)(param_1 + 0x180) = local_118[0];
  FUN_00640450(s_Width_0072f114,param_1 + 0x15c);
  FUN_00640450(s_Height_0072f10c,param_1 + 0x160);
  FUN_005a3ca0();
  iVar3 = __ftol();
  FUN_005a3ca0();
  iVar4 = __ftol();
  if (iVar3 < 3) {
    iVar3 = 3;
  }
  *(int *)(param_1 + 0x164) = iVar3;
  if (iVar4 < 2) {
    iVar4 = 2;
  }
  *(int *)(param_1 + 0x168) = iVar4;
  FUN_00640420(s_UTile_0072f104,param_1 + 0x16c);
  FUN_00640420(s_VTile_0072f0fc,param_1 + 0x170);
  FUN_00640420(s_FreezeDist_0072ec8c,param_1 + 0x174);
  FUN_00640420(s_SleepTime_0072f0f0,param_1 + 0x178);
  FUN_00640420(s_CollScale_0072f0e4,param_1 + 0x17c);
  FUN_006405b0(s_StingBreak_0072f0d8,param_1 + 0x184);
  FUN_006405b0(s_StickBreak_0072f0cc,param_1 + 0x188);
  FUN_006405b0(s_StoneBreak_0072f0c0,param_1 + 0x18c);
  FUN_006405b0(s_AnyPainBreak_0072f0b0,param_1 + 400);
  FUN_004e47a0(param_2);
  FUN_004f03e0();
  FUN_0063ff20();
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = *(int *)(param_2 + 0xc);
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      local_11c = iVar3;
      FUN_0063ffc0();
      FUN_006403e0(s_Color_00728924,&local_120);
      if ((iVar4 <= *(int *)(param_1 + 0x164)) && (iVar5 < *(int *)(param_1 + 0x168))) {
        puVar1 = (undefined1 *)
                 (*(int *)(param_1 + 0x1e8) + ((*(int *)(param_1 + 0x164) + 1) * iVar5 + iVar4) * 4)
        ;
        puVar1[3] = local_11d;
        puVar1[2] = local_11e;
        puVar1[1] = local_11f;
        *puVar1 = local_120;
      }
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x164) <= iVar4) {
        iVar4 = 0;
        iVar5 = iVar5 + 1;
      }
      local_11c = local_11c + -1;
      iVar3 = local_11c;
    } while (local_11c != 0);
  }
  FUN_004ee720();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

