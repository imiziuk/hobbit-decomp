
void __fastcall FUN_0045b6b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_40 [64];
  
  if ((*(byte *)((int)param_1 + 0x126) & 1) != 0) {
    return;
  }
  if (((*(byte *)((int)param_1 + 0x126) & 1) == 0) &&
     ((*(byte *)((int)param_1 + 0x15b) & 0x10) == 0)) {
    iVar3 = FUN_004c71a0();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x118))();
    }
    else {
      piVar1 = (int *)param_1[0x50];
      uVar2 = piVar1[1] * 2;
      if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
        iVar3 = *piVar1;
      }
      else {
        iVar3 = FUN_00549470(piVar1 + 1);
      }
      if (iVar3 != 0) {
        FUN_0053cb40(s__coll_0072c884);
      }
      (**(code **)(*param_1 + 0x114))(auStack_40);
    }
    FUN_004d2250(param_1[2],param_1[3],&stack0xffffffb8);
  }
  return;
}

