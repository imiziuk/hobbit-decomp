
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00624140(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (-1 < *(int *)(param_1 + 0x48)) {
    uVar1 = FUN_00624220(param_2);
    return uVar1;
  }
  if (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 100)) {
    FUN_005af120();
    fVar3 = (float10)FUN_004a6970();
    if (fVar3 <= (float10)_DAT_006e95d8) {
      FUN_005af120();
      fVar3 = (float10)FUN_004a6970();
      if (fVar3 <= (float10)_DAT_006e936c) {
        FUN_005af120();
        fVar3 = (float10)FUN_004a6970();
        if (fVar3 <= (float10)_DAT_006e9550) {
          *(undefined4 *)(param_1 + 0x48) = 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x48) = 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    iVar2 = FUN_00647e40(*(undefined4 *)
                          (&PTR_PTR_s_stand_attack_0074a0c0)[*(int *)(param_1 + 0x48) * 2],
                         s_stand_attack_0074a010);
    *param_2 = 10 - (uint)(iVar2 != 0);
    return 1;
  }
  return 0;
}

