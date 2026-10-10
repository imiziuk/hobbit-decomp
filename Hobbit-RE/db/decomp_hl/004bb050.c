
void __fastcall FUN_004bb050(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int aiStack_40 [16];
  
  if ((*(byte *)((int)param_1 + 0x126) & 1) == 0) {
    piVar3 = param_1 + 0x75;
    if ((aiStack_40 != piVar3) && (piVar3 != param_1 + 0x85)) {
      iVar4 = (int)piVar3 - (int)aiStack_40;
      puVar1 = (undefined4 *)&stack0xffffffb8;
      do {
        puVar2 = puVar1 + 4;
        puVar1[2] = *piVar3;
        puVar1[3] = piVar3[1];
        *puVar2 = *(undefined4 *)(iVar4 + (int)puVar2);
        puVar1[5] = piVar3[3];
        piVar3 = piVar3 + 4;
        puVar1 = puVar2;
      } while (piVar3 != param_1 + 0x85);
    }
    piVar3 = (int *)(**(code **)(*param_1 + 0x128))(aiStack_40,1);
    (**(code **)(*piVar3 + 4))(param_1);
  }
  return;
}

