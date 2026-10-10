
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00622380(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if (_DAT_006f5fc4 <= *(float *)(param_1 + 100)) {
    uVar2 = FUN_005af060(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    fVar4 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 100) = (float)fVar4;
  }
  sVar1 = *(short *)(param_1 + 0x42);
  if (((sVar1 != 10) && (sVar1 != 6)) && (sVar1 != 0xb)) {
    iVar3 = FUN_005af000();
    if (iVar3 == 0) {
      FUN_005af120();
      fVar4 = (float10)FUN_005aaac0();
      if ((float10)*(float *)(param_1 + 0x88) < fVar4) {
LAB_00622415:
        iVar3 = FUN_005af780(2);
        if (iVar3 != 0) {
          FUN_005bec70(2);
          return;
        }
      }
      else {
        iVar3 = FUN_005af7e0();
        if (iVar3 != 0) goto LAB_00622415;
      }
      FUN_005af120();
      fVar4 = (float10)FUN_005aaac0();
      if (fVar4 <= (float10)*(float *)(param_1 + 0x88)) {
        iVar3 = FUN_005af7e0();
        if (iVar3 == 0) goto LAB_00622499;
      }
      iVar3 = FUN_005af780(1);
      if (iVar3 != 0) {
        FUN_005bec70(1);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x68) == 0) {
      iVar3 = FUN_005af780(4);
      uVar2 = 4;
      if (iVar3 != 0) goto LAB_0062249d;
    }
  }
LAB_00622499:
  uVar2 = param_2;
LAB_0062249d:
  FUN_005bec70(uVar2);
  return;
}

