
undefined4 __fastcall FUN_0063e6a0(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__ReadFields_0074ad18);
  local_4 = 0;
  if (*(int *)(param_1 + 0x6b8) < *(int *)(param_1 + 0x104)) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x6b4));
    *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x104);
    pvVar2 = operator_new(*(int *)(param_1 + 0x104) * 0x4a0);
    *(void **)(param_1 + 0x6b4) = pvVar2;
  }
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_24 = 0;
    local_28 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x6b4) + local_24;
      iVar7 = *(int *)(param_1 + 0x10c) + local_28;
      *(undefined4 *)(iVar9 + 4) = 0;
      *(undefined4 *)(iVar9 + 8) = 0;
      *(undefined4 *)(iVar9 + 0xc) = 0;
      *(undefined4 *)(iVar9 + 0x10) = 0;
      local_20 = 0;
      if (0 < *(int *)(iVar7 + 0x104)) {
        local_2c = (undefined4 *)(iVar7 + 0x108);
        do {
          uVar8 = 0;
          iVar3 = FUN_00643f60(1);
          switch(*local_2c) {
          case 1:
            if ((iVar3 != 1) && (*(int *)(param_1 + 0x67c) == 1)) {
              pcVar5 = s_Expecting_a_FLOAT_but_found_some_0074ad2c;
LAB_0063e923:
              uVar4 = FUN_0063dee0(param_1,pcVar5);
              local_4 = 0xffffffff;
              FUN_00649720();
              ExceptionList = local_c;
              return uVar4;
            }
            *(undefined4 *)(iVar9 + 0x14 + *(int *)(iVar9 + 4) * 4) =
                 *(undefined4 *)(param_1 + 0x674);
            *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
            break;
          case 2:
            if ((iVar3 != 1) && (*(int *)(param_1 + 0x67c) == 0)) {
              pcVar5 = s_Expecting_a_INTEGER_but_found_so_0074ad58;
              goto LAB_0063e923;
            }
            *(undefined4 *)(iVar9 + 0x54 + *(int *)(iVar9 + 8) * 4) =
                 *(undefined4 *)(param_1 + 0x678);
            *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
            break;
          case 3:
            if (iVar3 != 4) {
              pcVar5 = s_Expecting_a_STRING_but_found_som_0074ad88;
              goto LAB_0063e923;
            }
            iVar3 = *(int *)(iVar9 + 0xc);
            *(int *)(iVar9 + 0xc) = iVar3 + 1;
            FUN_00647d10(iVar3 * 0x100 + 0x94 + iVar9,param_1 + 0x274);
            break;
          case 4:
            if (iVar3 != 4) {
              pcVar5 = s_Expecting_a_GUID_but_found_somet_0074adb4;
              goto LAB_0063e923;
            }
            pcVar5 = (char *)(param_1 + 0x274);
            uVar6 = 0;
            cVar1 = *(char *)(param_1 + 0x274);
            while (cVar1 != '\0') {
              pcVar5 = pcVar5 + 1;
              if (cVar1 != ':') {
                if (cVar1 < ':') {
                  iVar3 = 0;
                }
                else {
                  iVar3 = -0x37;
                }
                uVar8 = uVar8 << 4 | uVar6 >> 0x1c;
                uVar6 = cVar1 + iVar3 & 0xfU | uVar6 << 4;
              }
              cVar1 = *pcVar5;
            }
            iVar3 = *(int *)(iVar9 + 0x10);
            *(uint *)(iVar9 + 0x498 + iVar3 * 8) = uVar6;
            *(uint *)(iVar9 + 0x49c + iVar3 * 8) = uVar8;
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          }
          local_20 = local_20 + 1;
          local_2c = local_2c + 1;
        } while (local_20 < *(int *)(iVar7 + 0x104));
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + 0x148;
      local_24 = local_24 + 0x4a0;
    } while (local_1c < *(int *)(param_1 + 0x104));
  }
  *(int *)(param_1 + 0x6ac) = *(int *)(param_1 + 0x6ac) + 1;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

