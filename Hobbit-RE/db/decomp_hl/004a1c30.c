
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1c30(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3a00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceDeathTimer_0072aed0);
  local_4 = 0;
  iVar4 = (**(code **)(*param_1 + 0x108))(0);
  if (iVar4 != 0) goto LAB_004a1dfc;
  iVar4 = param_1[0x9f];
  iVar2 = param_1[0x9e];
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  puStack_8._0_1_ = 1;
  iVar4 = FUN_00406ce0(iVar2,iVar4);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (iVar4 == -1) {
    FUN_00649720();
LAB_004a1d00:
    param_1[0xa7] = (int)((float)param_1[0x117] + (float)param_1[0xa7]);
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    bVar1 = *(byte *)(uVar3 + 0x7f);
    FUN_00649720();
    if ((-(uint)((bVar1 & 0x10) != 0) & uVar3) == 0) goto LAB_004a1d00;
    if ((*(byte *)(param_1 + 0x11e) & 0x10) == 0) {
      FUN_0046a550();
      param_1[0x11e] = param_1[0x11e] | 0x10;
    }
    else {
      iVar4 = FUN_0046adc0();
      if (iVar4 != 0) goto LAB_004a1d00;
    }
  }
  if (((_DAT_0072a8e4 <= (float)param_1[0xa7]) && (uVar3 = param_1[0x9a], (uVar3 & 0x10000) != 0))
     && ((char)(uVar3 >> 8) < '\0')) {
    param_1[0x9a] = uVar3 & 0xfffeffff;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    fStack_18 = ((float)param_1[0x15] - (float)param_1[0x12]) * _DAT_006e9360 * _DAT_006e9988;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    uStack_20 = puVar5[2];
    fStack_24 = fStack_18 + (float)puVar5[1];
    uStack_28 = *puVar5;
    FUN_00488d30(param_1[0xaa],&uStack_28,&uStack_34,&stack0xffffffb8);
    FUN_00659600(param_1[0xb5],1);
  }
  if ((_DAT_0072a8e0 <= (float)param_1[0xa7]) || ((*(byte *)(param_1 + 0x11e) & 0x40) != 0)) {
    FUN_004a69a0();
  }
LAB_004a1dfc:
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

