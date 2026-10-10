
void __thiscall FUN_006baba0(undefined4 *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int iStack_4;
  
  iVar2 = 0;
  iStack_4 = 0;
  if (param_1[0x2a] == 0) {
    param_1[0x24] = 1;
    iVar3 = 0;
    if (0 < *(int *)(param_1[0x28] + 0xc)) {
      do {
        FUN_006bf760(param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1[0x28] + 0xc));
    }
    iVar3 = param_1[0x28];
    if (0 < *(int *)(iVar3 + 0x10)) {
      do {
        piVar1 = *(int **)(param_1[0x27] + iVar2 * 4);
        iVar3 = *(int *)(*(int *)(iVar3 + 0x28) + iVar2 * 4);
        fVar4 = (float10)(**(code **)*param_1)();
        if ((float10)*(float *)(iVar3 + 0x78) <= fVar4) {
          iVar3 = (**(code **)(*piVar1 + 0xc))(param_1);
          if (iVar3 == 0) {
            if (param_1[0x1d] != 0) {
              FUN_006bb350();
            }
            FUN_006bade0();
            (**(code **)(*piVar1 + 4))(param_1,param_2);
          }
          else {
            iStack_4 = iStack_4 + 1;
          }
        }
        iVar3 = param_1[0x28];
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 0x10));
    }
    param_1[0x1d] = 0;
    param_1[0x29] = param_2 + (float)param_1[0x29];
    if (iStack_4 == *(int *)(param_1[0x28] + 0x10)) {
      param_1[0x2a] = 1;
    }
  }
  return;
}

