
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00490590(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_44;
  undefined4 auStack_40 [11];
  float fStack_14;
  float fStack_c;
  undefined4 uStack_4;
  
  if (((DAT_007ba5c8 == 0) || (iVar1 = FUN_005a8fa0(param_1 + 0x11,1), iVar1 == 0)) &&
     ((param_1[0x74] == 0 || (DAT_0075b674 == 0)))) {
    (**(code **)(*param_1 + 0x34))(auStack_40);
    if ((param_1[0x5d] != 0) && ((param_1[0x78] == 5 || (param_1[0x78] == 2)))) {
      fVar8 = (float10)FUN_00647b30(fStack_14 - 5.0,fStack_14 + 5.0);
      fVar9 = (float10)FUN_00647b30(fStack_c - 5.0,fStack_c + 5.0);
      fStack_c = (float)fVar9;
      fStack_14 = (float)fVar8;
    }
    iVar1 = param_1[0x76];
    iVar2 = FUN_00587ce0();
    if ((((iVar1 <= iVar2) && (param_1[0x6e] != 0)) ||
        ((*(byte *)((int)param_1 + 0x7b) & 0x10) != 0)) || (iVar1 < 0)) {
      uVar3 = FUN_004aac30();
      FUN_00583210(uVar3);
      uVar4 = FUN_004aac10();
      iVar1 = param_1[4];
      uVar11 = 0;
      uVar10 = 0;
      uVar3 = extraout_ECX;
      FUN_00425250(&stack0xffffffa8);
      FUN_00582ea0(param_1 + 0x11,param_1 + 0x31,uVar3,uVar10,iVar1,uVar11,uVar4);
      iVar1 = param_1[0x76] + DAT_007297ac;
      *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xcf;
      param_1[0x76] = iVar1;
    }
    iVar1 = FUN_005a7910();
    param_1[0x53] = iVar1;
    *(int **)(iVar1 + 0x10) = param_1;
    *(int *)(param_1[0x53] + 0x28) = param_1[4];
    *(int **)(param_1[0x53] + 0x1c) = param_1 + 0x11;
    *(byte *)(param_1[0x53] + 0x3c) = *(byte *)(param_1[0x53] + 0x3c) & 0xfd;
    *(byte *)(param_1[0x53] + 0x3c) = *(byte *)(param_1[0x53] + 0x3c) | 1;
    *(byte *)(param_1[0x53] + 0x3c) = *(byte *)(param_1[0x53] + 0x3c) & 0xdf;
    *(undefined4 *)(param_1[0x53] + 0x34) = 0;
    *(undefined4 *)(param_1[0x53] + 0x14) = 0;
    *(int **)(param_1[0x53] + 0x24) = param_1 + 0x31;
    uVar3 = FUN_00549470(param_1 + 0x54);
    *(undefined4 *)(param_1[0x53] + 0x38) = uVar3;
    *(byte *)(param_1[0x53] + 8) = *(byte *)(param_1[0x53] + 8) | 4;
    if (*(int *)(param_1[0x53] + 0x38) != 0) {
      iVar1 = (DAT_007f23d8 + 0x3fU & 0xffffffc0) - DAT_007f23d8;
      puVar7 = (undefined4 *)(DAT_007f23d8 + iVar1);
      DAT_007f23d8 = DAT_007f23d8 + (iVar1 + 0x4fU & 0xfffffff0);
      if (puVar7 != &uStack_44) {
        puVar6 = &uStack_44;
        puVar5 = puVar7 + 2;
        do {
          puVar5[-2] = *puVar6;
          puVar5[-1] = puVar6[1];
          *puVar5 = *(undefined4 *)(((int)&uStack_44 - (int)puVar7) + (int)puVar5);
          puVar5[1] = *(undefined4 *)(((int)auStack_40 - (int)puVar7) + (int)puVar5);
          puVar6 = puVar6 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar6 != &uStack_4);
      }
      *(undefined4 **)(param_1[0x53] + 0x14) = puVar7;
      *(undefined4 *)(param_1[0x53] + 0x18) = 1;
      (**(code **)(*(int *)param_1[0x53] + 4))(param_1);
    }
  }
  return;
}

