
void __thiscall FUN_004d4360(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float unaff_EBX;
  int *piVar9;
  undefined8 uVar10;
  float fStack_40;
  int local_3c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4fa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_treasure_chest__OnAdvanceLogic_0072d9c8);
  local_4 = 0;
  if (param_1[0x58] == 0) {
    iVar5 = param_1[0x60];
    iVar2 = param_1[0x61];
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar5 = FUN_00406ce0(iVar5,iVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
LAB_004d440a:
      uVar10 = FUN_0054bad0(0x2d,0,0);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 2;
      iVar5 = FUN_00406ce0(uVar10);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar5 == -1) {
        FUN_00649720();
        piVar9 = (int *)0x0;
      }
      else {
        uVar3 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
        piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
        FUN_00649720();
      }
      FUN_00488c30(s_TreasureChestClosed_0072d9b4);
      iVar5 = *piVar9;
      uVar6 = (**(code **)(*param_1 + 0x30))();
      (**(code **)(iVar5 + 0x1c))(uVar6);
      (**(code **)(*piVar9 + 0x110))();
      fStack_28 = DAT_0075dd30;
      fStack_24 = DAT_0075dd34;
      fStack_20 = DAT_0075dd38;
      puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
      fStack_40 = (float)puVar7[2];
      FUN_0064c8e0(fStack_40,&fStack_40,&stack0xffffffbc);
      fVar4 = fStack_24 * fStack_40;
      fStack_24 = fStack_28 * fStack_40 + fStack_24 * unaff_EBX;
      fStack_28 = unaff_EBX * fStack_28 - fVar4;
      FUN_004286f0(*puVar7);
      FUN_00428740(puVar7[1]);
      pfVar8 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_14 = fStack_20 + pfVar8[2];
      fStack_18 = fStack_24 + pfVar8[1];
      fStack_1c = fStack_28 + *pfVar8;
      (**(code **)(*piVar9 + 0x14))(&fStack_1c,0);
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      bVar1 = *(byte *)(uVar3 + 0x7f);
      FUN_00649720();
      if ((-(uint)((bVar1 & 0x10) != 0) & uVar3) == 0) goto LAB_004d440a;
    }
    if (param_1[0x58] != 0) goto LAB_004d4569;
LAB_004d45c8:
    if (param_1[0x59] == 0) {
      *(ushort *)((int)param_1 + 0x7a) = *(ushort *)((int)param_1 + 0x7a) & 0xffdf | 0x10;
      goto LAB_004d45f9;
    }
  }
  else {
LAB_004d4569:
    if (param_1[0x59] == 0) {
      iVar5 = FUN_004c71a0();
      if (iVar5 != 0) {
        iVar5 = param_1[0x50];
        local_3c = *(int *)(iVar5 + 0xc) + -2;
        if (*(float *)(iVar5 + 0x10) <= (float)local_3c) {
          FUN_0053b780(param_2);
        }
        else {
          *(undefined4 *)(iVar5 + 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x68) = 0;
          *(float *)(iVar5 + 0x10) = (float)(*(int *)(iVar5 + 0xc) + -2);
          param_1[0x59] = 1;
        }
      }
      goto LAB_004d45c8;
    }
  }
  *(ushort *)((int)param_1 + 0x7a) = *(ushort *)((int)param_1 + 0x7a) & 0xffef | 0x820;
LAB_004d45f9:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

