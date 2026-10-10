
void __thiscall FUN_006a72a0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7be8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_text__Render_00755e64);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) goto LAB_006a742f;
  local_1c = param_1[0x11] + param_2;
  local_10 = param_1[0x14] + param_3;
  local_14 = param_1[0x13] + param_2;
  local_18 = param_1[0x12] + param_3;
  local_21 = 0xff;
  local_22 = 0xff;
  local_23 = 0xff;
  local_24 = -1;
  local_25 = 0xff;
  local_26 = 0;
  local_27 = 0;
  local_28 = 0;
  if ((param_1[0xb] & 0x100U) == 0) {
    if ((param_1[0xb] & 0x600U) == 0x400) {
      pcVar2 = (char *)(**(code **)(*param_1 + 0x28))();
    }
    else {
      pcVar2 = (char *)(**(code **)(*param_1 + 0x28))();
    }
    local_21 = pcVar2[3];
    local_22 = pcVar2[2];
    local_23 = pcVar2[1];
    local_24 = *pcVar2;
    local_25 = 0xff;
    local_26 = 0;
    local_27 = 0;
    local_28 = 0;
    if (((local_22 != -1) || (local_23 != -1)) || (local_24 != -1)) goto LAB_006a735f;
    local_1c = local_1c + 2;
    local_18 = local_18 + -2;
    iVar3 = param_1[0x15];
    local_10 = local_10 + -2;
    iVar5 = param_1[0x28];
    local_14 = local_14 + 2;
    puVar6 = &local_28;
    piVar4 = &local_1c;
    uVar1 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar1,piVar4,iVar5,puVar6,iVar3);
    local_1c = local_1c + -2;
    local_14 = local_14 + -2;
    local_18 = local_18 + -2;
    local_10 = local_10 + -2;
  }
  else {
    local_21 = -1;
    local_22 = -0x80;
    local_23 = -0x80;
    local_24 = -0x80;
    local_25 = 0;
LAB_006a735f:
    local_26 = 0;
    local_27 = 0;
    local_28 = 0;
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
    iVar3 = param_1[0x15];
    local_18 = local_18 + -1;
    local_10 = local_10 + -1;
    iVar5 = param_1[0x28];
    puVar6 = &local_28;
    piVar4 = &local_1c;
    uVar1 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar1,piVar4,iVar5,puVar6,iVar3);
    local_1c = local_1c + -1;
    local_14 = local_14 + -1;
    local_18 = local_18 + -1;
    local_10 = local_10 + -1;
  }
  iVar3 = param_1[0x15];
  iVar5 = param_1[0x28];
  pcVar2 = &local_24;
  piVar4 = &local_1c;
  uVar1 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar1,piVar4,iVar5,pcVar2,iVar3);
  iVar3 = 0;
  if (0 < param_1[6]) {
    do {
      (**(code **)(**(int **)(param_1[7] + iVar3 * 4) + 8))
                (param_1[0x11] + param_2,param_1[0x12] + param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[6]);
  }
LAB_006a742f:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

