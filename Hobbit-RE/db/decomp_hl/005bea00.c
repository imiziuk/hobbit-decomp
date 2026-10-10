
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005bea00(int param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 uVar8;
  
  if ((*(byte *)(param_1 + 0x40) & 8) == 0) {
    return 0;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x80);
  if ((iVar4 == 5) || (iVar4 == 4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar4 = FUN_005af120();
  if ((*(int *)(*(int *)(iVar4 + 0x304) + 0x158) != 0) &&
     (iVar4 = FUN_005af120(),
     (*(byte *)(*(int *)(*(int *)(iVar4 + 0x304) + 0x158) + 0x78) & 0x10) != 0)) {
    return 0;
  }
  if (((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) == 0) || (bVar3)) {
    if (*(short *)(param_1 + 0x42) == 3) {
      cVar2 = *(char *)(param_1 + 0x46);
      if (cVar2 == '\x06') {
        return 0;
      }
      if (cVar2 == '\x03') {
        return 0;
      }
      if (cVar2 == '\x05') {
        return 0;
      }
      uVar8 = 0x37;
      FUN_005af120(0x37);
      in_stack_ffffffec = 0x5bea9e;
      iVar4 = FUN_004a1250(uVar8);
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x46) = 6;
        return 1;
      }
    }
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x84);
    if (bVar3) {
      if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
        *(undefined1 *)(param_1 + 0x46) = 5;
        FUN_005af120();
        FUN_004a40d0();
        return 1;
      }
      *(undefined1 *)(param_1 + 0x46) = 3;
      FUN_005af120();
      FUN_004a40d0();
      return 1;
    }
    if (fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) {
      if (*(short *)(param_1 + 0x42) == 2) {
        if (*(char *)(param_1 + 0x45) == '\x02') {
          *(undefined1 *)(param_1 + 0x46) = 7;
          return 1;
        }
        if (*(char *)(param_1 + 0x45) == '\x03') {
          *(undefined1 *)(param_1 + 0x46) = 8;
          return 1;
        }
      }
      piVar5 = (int *)FUN_005af120();
      uVar8 = 0x5beb5b;
      fVar6 = (float10)(**(code **)(*piVar5 + 0x10c))();
      FUN_004357e0(*(int *)(param_1 + 8) + 0x68);
      FUN_005af120();
      fVar7 = (float10)FUN_004a5990(in_stack_ffffffe8,in_stack_ffffffec,uVar8);
      fVar6 = (fVar7 - (float10)(float)fVar6) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar6) ||
         (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
        fVar6 = (float10)FUN_0064c6b0((float)fVar6,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar6) {
        do {
          fVar6 = fVar6 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar6);
      }
      if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar6 = fVar6 + (float10)_DAT_006e9598;
        } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
      }
      fVar6 = fVar6 - (float10)_DAT_006e9368;
      if ((fVar6 < (float10)_DAT_006e9570 == (NAN(fVar6) || NAN((float10)_DAT_006e9570))) &&
         (fVar6 <= (float10)_DAT_006e9578)) {
        *(undefined1 *)(param_1 + 0x46) = 1;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x46) = 2;
      return 1;
    }
    iVar4 = FUN_005af120();
    if (*(int *)(iVar4 + 0x220) != 0) {
      *(undefined1 *)(param_1 + 0x46) = 4;
      return 1;
    }
  }
  return 0;
}

