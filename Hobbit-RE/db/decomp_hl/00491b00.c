
/* WARNING: Removing unreachable block (ram,0x00491e06) */
/* WARNING: Removing unreachable block (ram,0x00491e14) */
/* WARNING: Removing unreachable block (ram,0x00491e9f) */
/* WARNING: Removing unreachable block (ram,0x00491ea7) */

void __thiscall FUN_00491b00(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d30e3;
  local_c = ExceptionList;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x174) == 0) {
    ExceptionList = &local_c;
    FUN_004ab4e0();
    local_4 = 0;
    FUN_00401f00();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x80) = 8;
      FUN_004357e0();
      FUN_004357e0();
      *(undefined4 *)(iVar2 + 0x84) = 3;
      iVar2 = FUN_00425010();
      FUN_00647d10();
      FUN_00647dc0();
      *(undefined4 *)(iVar2 + 0x80) = 2;
      *(undefined4 *)(iVar2 + 0xf8) = local_40;
      *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      *(undefined4 *)(iVar2 + 0x84) = 0x12;
      iVar2 = FUN_00425010();
      FUN_00647d10();
      FUN_00647dc0();
      *(undefined4 *)(iVar2 + 0x80) = 2;
      *(undefined4 *)(iVar2 + 0xf8) = local_3c;
      *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      *(undefined4 *)(iVar2 + 0x84) = 0x16;
      iVar2 = FUN_00425010();
      FUN_00647d10();
      FUN_00647dc0();
      *(undefined4 *)(iVar2 + 0x80) = 2;
      *(undefined4 *)(iVar2 + 0xf8) = local_38;
      *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      *(undefined4 *)(iVar2 + 0x84) = 0x16;
    }
    if (0 < *(int *)((int)param_2 + 8)) {
LAB_00491d12:
      iVar2 = FUN_00647e40();
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) goto code_r0x00491d2a;
      iVar2 = *(int *)((int)param_2 + 8);
      if (*(int *)((int)param_2 + 0x10) < iVar2) {
        param_2 = operator_new(iVar2 * 0x108);
        local_4._0_1_ = 1;
        if (param_2 == (void *)0x0) {
          param_2 = (void *)0x0;
        }
        else {
          FUN_00401080();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar3 = iVar4;
        if (0 < iVar4) {
          do {
            FUN_00437630();
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (iVar4 < *(int *)(iVar1 + 8)) {
          do {
            FUN_00437630();
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840();
        *(void **)(iVar1 + 0xc) = param_2;
        *(int *)(iVar1 + 0x10) = iVar2;
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 8);
      }
      else {
        while (iVar2 = iVar2 + -1, iVar4 <= iVar2) {
          FUN_00437630();
        }
        *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 8);
      }
    }
LAB_00491ed6:
    FUN_004f1e00();
    FUN_00459f30(iVar1,&DAT_00725c88,0x1d,0,2);
    FUN_00537ff0(iVar1,s_Path_Offset_007299d8,2,0,0x3f800000);
    FUN_00537ff0();
    FUN_005669e0(iVar1,s_IsMoving_00729910);
    FUN_005669e0(iVar1,s_Sinks_007298d8,2);
    FUN_005669e0(iVar1,s_Set_As_Top_007299cc,2);
    FUN_005669e0(iVar1,s_Move_Top_Bottom_with_object_007299b0,2);
    FUN_00401f00(0x800000,0x800000,0x800000);
    FUN_00480ff0(iVar1,s_Top_Pos_007299a8,2);
    FUN_00401f00();
    FUN_00401f00(0x800000,0x800000,0x800000);
    FUN_00480ff0(iVar1,s_Sink_Vector_0072999c,2);
    uVar5 = 2;
    if (*(int *)(param_1 + 0x174) == 0) {
      uVar5 = 4;
    }
    FUN_00537ff0();
    FUN_00537ff0(iVar1,s_Transition_Speed_00729974,uVar5,0x800000);
    FUN_005669e0(iVar1,s_Starts_At_Top_00729964,uVar5);
    local_4 = 0xffffffff;
    FUN_005c8440();
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 0x38;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
  }
  ExceptionList = local_c;
  return;
code_r0x00491d2a:
  if (*(int *)((int)param_2 + 8) <= iVar4) goto LAB_00491ed6;
  goto LAB_00491d12;
}

