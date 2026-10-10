
undefined4 __thiscall
FUN_006a2400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e77e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_006a0380(param_2);
  uVar2 = FUN_006a2f20(param_2,param_3,param_5,param_6,param_7);
  FUN_0065f8a0(param_1 + 0x118,param_1 + 0x11c);
  uVar3 = FUN_0069f520(s_frame_00755b0c);
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 **)(param_1 + 0xdc) = param_4;
  if (param_4 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4[1];
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  if (param_4 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4[2];
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0xc0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0x28;
  *(undefined1 *)(param_1 + 0x10d) = 0x28;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined4 *)(param_1 + 0x124) = param_8;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar1 + 0x38);
  iVar8 = *(int *)(param_1 + 0xe4) * *(int *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar1 + 0x3c);
  if (iVar8 - *(int *)(param_1 + 0x100) != 0) {
    pvVar4 = operator_new(iVar8 * 4);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xf8)) {
      do {
        *(undefined4 *)((int)pvVar4 + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xfc) + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xf8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xfc));
    *(void **)(param_1 + 0xfc) = pvVar4;
    *(int *)(param_1 + 0x100) = iVar8;
  }
  param_7 = 0;
  if (0 < *(int *)(param_1 + 0xe4) * *(int *)(param_1 + 0xe0)) {
    do {
      iVar1 = *(int *)(param_1 + 0xf8);
      if (*(int *)(param_1 + 0x100) < iVar1 + 1) {
        if (*(int *)(param_1 + 0x108) == 0) {
          iVar5 = *(int *)(param_1 + 0x100) / 2;
          iVar8 = 1;
          if (0 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar1 + iVar8 < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar5 < 1) {
              iVar5 = 1;
            }
            iVar1 = iVar1 + iVar5;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x108) + iVar1;
        }
        pvVar4 = operator_new(iVar1 * 4);
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0xf8)) {
          do {
            *(undefined4 *)((int)pvVar4 + iVar8 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xfc) + iVar8 * 4);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0xf8));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0xfc));
        *(int *)(param_1 + 0x100) = iVar1;
        *(void **)(param_1 + 0xfc) = pvVar4;
      }
      iVar1 = *(int *)(param_1 + 0xf8) + 1;
      *(int *)(param_1 + 0xf8) = iVar1;
      *(undefined4 *)(*(int *)(param_1 + 0xfc) + -4 + iVar1 * 4) = 0;
      param_7 = param_7 + 1;
    } while (param_7 < *(int *)(param_1 + 0xe4) * *(int *)(param_1 + 0xe0));
  }
  if (param_4 != (undefined4 *)0x0) {
    uVar3 = FUN_006ab1a0(&DAT_0071ceb4,*param_4);
    FUN_0064b7b0(uVar3);
  }
  *(undefined4 **)(param_1 + 0xdc) = param_4;
  if ((param_4 != (undefined4 *)0x0) && (param_7 = 0, 0 < (int)param_4[3])) {
    param_6 = 0;
    do {
      puVar9 = (undefined4 *)(param_4[4] + param_6);
      iVar5 = FUN_006a22a0(*(undefined4 *)(param_4[4] + 0x10 + param_6));
      iVar1 = puVar9[6];
      iVar6 = FUN_006a2260(puVar9[3]);
      iVar8 = puVar9[5];
      uVar3 = FUN_006a22a0(puVar9[4]);
      local_78 = FUN_006a2260(puVar9[3]);
      local_74 = uVar3;
      local_70 = iVar6 + iVar8;
      local_6c = iVar5 + iVar1;
      piVar7 = (int *)FUN_0069fe40(param_2,puVar9[2],&local_78,param_1,puVar9[0xb]);
      FUN_006a32c0(*puVar9);
      iVar1 = *piVar7;
      uVar3 = FUN_006ab1a0(&DAT_0071ceb4,puVar9[1]);
      (**(code **)(iVar1 + 0x1c))(uVar3);
      iVar1 = FUN_00647e40(puVar9[2],&DAT_00755c5c);
      if (iVar1 == 0) {
        uVar3 = FUN_006ab1a0(&DAT_0071ceb4,puVar9[1]);
        FUN_0064b0f0(uVar3);
        uStack_4 = 0;
        FUN_006aa870(auStack_58);
        uStack_4 = 0xffffffff;
        FUN_0064b190();
      }
      iStack_68 = puVar9[7];
      iStack_64 = puVar9[8];
      iStack_60 = puVar9[9] + iStack_68;
      iStack_5c = puVar9[10] + iStack_64;
      FUN_006aa840(&iStack_68);
      iVar1 = puVar9[8];
      if (iVar1 < puVar9[10] + iVar1) {
        iVar8 = puVar9[9] + puVar9[7];
        iVar5 = puVar9[7];
        do {
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            do {
              *(int **)(*(int *)(param_1 + 0xfc) + (*(int *)(param_1 + 0xe0) * iVar1 + iVar5) * 4) =
                   piVar7;
              iVar6 = puVar9[7];
              iVar5 = iVar5 + 1;
              iVar8 = puVar9[9] + iVar6;
            } while (iVar5 < iVar8);
          }
          iVar1 = iVar1 + 1;
          iVar5 = iVar6;
        } while (iVar1 < (int)(puVar9[10] + puVar9[8]));
      }
      param_7 = param_7 + 1;
      param_6 = param_6 + 0x30;
    } while (param_7 < (int)param_4[3]);
  }
  ExceptionList = local_c;
  return uVar2;
}

