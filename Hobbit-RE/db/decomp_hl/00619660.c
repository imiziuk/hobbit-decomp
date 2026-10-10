
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00619660(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xb4) & 0x10) == 0) {
    uVar2 = FUN_00553ce0(s_SculptureHead_Glow_00749950);
    *(undefined4 *)(param_1 + 0x11c) = uVar2;
    uVar2 = FUN_00553ce0(s_Column_GlowB_00749940);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = FUN_00553ce0(s_BlockDestroyB_00749930);
    *(undefined4 *)(param_1 + 0x124) = uVar2;
    uVar2 = FUN_00553ce0(s_MediumB_Glow_00749920);
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    uVar2 = FUN_00553ce0(s_MediumB_GlowB_00749910);
    *(undefined4 *)(param_1 + 300) = uVar2;
    uVar2 = FUN_00553ce0(s_Column_Glow_00749904);
    *(undefined4 *)(param_1 + 0x130) = uVar2;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x10;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x57c) + iVar3 * 4);
      if (DAT_006e92e4 < *(float *)(iVar1 + 0x24)) {
        *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) - _DAT_007493b8 * param_2;
      }
      if (iVar3 == 0) {
        FUN_004021c0(*(undefined4 *)(**(int **)(param_1 + 0x57c) + 8),
                     *(undefined4 *)(**(int **)(param_1 + 0x57c) + 0xc));
      }
      uVar2 = __ftol();
      FUN_00553ed0(*(undefined4 *)(param_1 + 0x11c + iVar3 * 4),uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x578));
  }
  return;
}

