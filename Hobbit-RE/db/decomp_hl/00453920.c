
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00453920(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float unaff_retaddr;
  
  FUN_004538d0();
  FUN_004538a0(param_2);
  bVar2 = false;
  fVar5 = (float10)FUN_0065a5b0(*(undefined4 *)(param_1 + 0x2dc));
  fVar5 = ((float10)unaff_retaddr - fVar5) - (float10)_DAT_006e99b0;
  if ((fVar5 < (float10)_DAT_006e9360 != (NAN(fVar5) || NAN((float10)_DAT_006e9360))) &&
     (*(int *)(param_1 + 0x45c) == 0)) {
    *(undefined4 *)(param_1 + 0x458) = 1;
    bVar2 = true;
    DAT_00724fa0 = 1;
  }
  if (*(int *)(param_1 + 0x458) != 0) {
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x2fc) = 1;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
    }
    iVar3 = FUN_00647ed0(s_MUSIC_Silence_00724fb8,*(undefined4 *)(param_1 + 0x33c));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
    }
    else if (DAT_00724fa0 != 0) {
      uVar4 = FUN_00659600(*(undefined4 *)(param_1 + 0x33c),1);
      *(undefined4 *)(param_1 + 0x2e0) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x45c) = 1;
  }
  iVar3 = FUN_00453b40((undefined4 *)(param_1 + 0x2dc));
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x45c) == 1) {
      FUN_00453c20(param_1 + 0x3a0);
    }
    puVar1 = (undefined4 *)(param_1 + 0x3a0);
    iVar3 = FUN_00453bf0(puVar1);
    if (iVar3 != 0) {
      FUN_00659db0(*puVar1);
      fVar5 = (float10)FUN_00658020(*puVar1);
      *(float *)(param_1 + 0x3ac) = (float)fVar5;
      *(undefined4 *)(param_1 + 0x2dc) = *puVar1;
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x3a4);
      *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x3a8);
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x3ac);
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x3b0);
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x3b4);
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x3b8);
      *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x3bc);
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x3c0);
      *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c4);
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c8);
      *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3cc);
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3d0);
      FUN_0064a320(param_1 + 0x3d4);
      FUN_0064a320(param_1 + 0x400);
      FUN_0064a320(param_1 + 0x42c);
      *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x458);
      *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x45c);
      *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0x460);
      *(undefined4 *)(param_1 + 0x2fc) = 2;
      *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x398) = 3;
      *(undefined4 *)(param_1 + 0x458) = 0;
      *(undefined4 *)(param_1 + 0x45c) = 0;
      *(undefined4 *)(param_1 + 0x2ec) = 0x3fc00000;
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
  }
  return;
}

