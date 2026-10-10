
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00485fa0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  FUN_006bf840(*(undefined4 *)(param_1 + 0x16c));
  pvVar2 = operator_new(*(int *)(param_1 + 0x10c) * 0x48);
  *(void **)(param_1 + 0x16c) = pvVar2;
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    iVar5 = 0;
    do {
      fVar6 = (float10)FUN_00647b30(0,0x40a00000);
      *(float *)(iVar5 + 0x24 + *(int *)(param_1 + 0x16c)) = (float)fVar6;
      puVar1 = (undefined4 *)(iVar5 + 0xc + *(int *)(param_1 + 0x16c));
      uVar3 = uVar4 & 0x80000001;
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      *(uint *)(iVar5 + 0x28 + *(int *)(param_1 + 0x16c)) = uVar3;
      fVar6 = (float10)FUN_00647b30(*(float *)(param_1 + 0x174) * _DAT_006e99ec,
                                    *(float *)(param_1 + 0x174) * _DAT_006e936c);
      *(float *)(iVar5 + *(int *)(param_1 + 0x16c)) = (float)fVar6;
      *(undefined4 *)(iVar5 + 4 + *(int *)(param_1 + 0x16c)) = 0;
      fVar6 = (float10)FUN_00647b30(*(float *)(param_1 + 0x178) * _DAT_006e99ec,
                                    *(float *)(param_1 + 0x178) * _DAT_006e936c);
      *(float *)(iVar5 + 8 + *(int *)(param_1 + 0x16c)) = (float)fVar6;
      *(undefined4 *)(iVar5 + 0x2c + *(int *)(param_1 + 0x16c)) = 0;
      *(undefined4 *)(iVar5 + 0x30 + *(int *)(param_1 + 0x16c)) = 0x3f000000;
      fVar6 = (float10)FUN_00647b30(0x3f000000,0x3f99999a);
      *(float *)(iVar5 + 0x34 + *(int *)(param_1 + 0x16c)) = (float)fVar6;
      puVar1 = (undefined4 *)(iVar5 + 0x18 + *(int *)(param_1 + 0x16c));
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x48;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10c));
  }
  return;
}

