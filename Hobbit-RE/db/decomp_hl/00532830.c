
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00532830(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  
  if (*(int *)(param_1 + 0x1b4) == 1) {
    iVar3 = *(int *)(param_1 + 0x1ac) * 0x30;
    fVar1 = *(float *)(iVar3 + 0x164 + param_1);
    fVar8 = (float10)FUN_0065a5b0(*(undefined4 *)(iVar3 + 0x14c + param_1));
    if ((float10)_DAT_006e99b0 < (float10)fVar1 - fVar8) {
      FUN_00532630();
    }
  }
  if (*(int *)(param_1 + 0x1b0) == 1) {
    iVar3 = FUN_00531430();
    if (*(int *)(param_1 + 0x13c) < 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    if (*(int *)(param_1 + 0x134) < 0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar2 != 0) {
      if (iVar2 <= *(int *)(param_1 + 0x134)) {
        *(int *)(param_1 + 0x134) = iVar2 + -1;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x134) * 4) + 100);
      if (iVar2 <= *(int *)(param_1 + 0x13c)) {
        *(int *)(param_1 + 0x13c) = iVar2 + -1;
      }
    }
    iVar2 = iVar3 * 0x30 + param_1;
    if (*(int *)(iVar2 + 0x14c) != 0) {
      FUN_00659c80(*(int *)(iVar2 + 0x14c),0x3d4ccccd);
    }
    uVar4 = FUN_00532710(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x13c));
    uVar5 = FUN_005327d0(*(undefined4 *)(param_1 + 0x134),uVar4);
    FUN_0064a2e0(uVar5);
    iVar6 = FUN_00647ed0(DAT_007642a0,s_MUSIC_Silence_00724fb8);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x164) = 0;
      *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(param_1 + 0x134);
      *(undefined4 *)(iVar2 + 0x16c) = 0;
      *(undefined4 *)(iVar2 + 0x15c) = 0;
      *(undefined4 *)(iVar2 + 0x158) = uVar4;
      *(undefined4 *)(iVar2 + 0x178) = 2;
      *(undefined4 *)(iVar2 + 0x168) = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x178 + param_1) =
           *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      return;
    }
    iVar6 = FUN_00659600(DAT_007642a0,0);
    *(int *)(iVar2 + 0x14c) = iVar6;
    if (iVar6 == 0) {
      FUN_0064e870(7,s_Failed_to_Load_Audio_Descriptor___00736f48,DAT_007642a0);
    }
    FUN_00532020(*(undefined4 *)(iVar2 + 0x14c),*(undefined4 *)(param_1 + 0x134),uVar4);
    iVar6 = FUN_00659a10(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1),
                         *(undefined4 *)(iVar2 + 0x14c));
    if (iVar6 == 0) {
      puVar7 = (undefined4 *)((iVar3 * 3 + 0x15) * 0x10 + param_1);
      *puVar7 = 0;
    }
    else {
      puVar7 = (undefined4 *)((iVar3 * 3 + 0x15) * 0x10 + param_1);
      *puVar7 = *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1);
    }
    if ((float)_DAT_006e92f8 < *(float *)(param_1 + 0x1d0)) {
      FUN_0065a050(*(undefined4 *)(iVar2 + 0x14c),0);
    }
    fVar8 = (float10)FUN_00658020(*(undefined4 *)(iVar2 + 0x14c));
    *(float *)(iVar2 + 0x164) = (float)fVar8;
    *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(iVar2 + 0x158) = uVar4;
    *(undefined4 *)(iVar2 + 0x178) = 0;
    *(undefined4 *)(iVar2 + 0x16c) = 0;
    *(undefined4 *)(iVar2 + 0x15c) = 0;
    *(undefined4 *)(iVar2 + 0x168) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x178 + param_1) =
         *(undefined4 *)(param_1 + 0x1d8);
    if (*(int *)(param_1 + 0x1d8) == 1) {
      fVar8 = (float10)FUN_00532630();
      FUN_00659ab0(*puVar7,(float)fVar8);
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  return;
}

