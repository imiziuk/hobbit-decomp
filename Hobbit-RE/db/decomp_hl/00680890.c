
void __fastcall FUN_00680890(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)param_1[0x7b];
  if (piVar1 != param_1 + 0x7a) {
    puVar2 = *(undefined4 **)(piVar1[2] + 0x10);
    if (piVar1[10] == 2) {
      uVar5 = FUN_0064cb70();
      *(undefined8 *)(piVar1 + 0x1a) = uVar5;
      piVar1[10] = 3;
      piVar1[7] = 0;
    }
    piVar1[8] = param_1[0x56];
    if (param_1[0x58] != 0) {
      uVar3 = piVar1[5] + piVar1[7] & param_1[0x58] - 1U;
      if (uVar3 != 0) {
        piVar1[7] = piVar1[7] - uVar3;
      }
    }
    if ((int)puVar2[4] < piVar1[8] + piVar1[5] + piVar1[7]) {
      piVar1[8] = (puVar2[4] - piVar1[5]) - piVar1[7];
    }
    param_1[0x98] = (int)piVar1;
    uVar3 = piVar1[8];
    if (param_1[0x59] != 0) {
      uVar4 = param_1[0x59] - 1;
      uVar3 = uVar3 + uVar4 & ~uVar4;
    }
    if (piVar1[0x16] == 0) {
      (**(code **)(*param_1 + 0x18))(puVar2,*puVar2,uVar3,piVar1[5] + piVar1[7],0);
      return;
    }
    (**(code **)(*param_1 + 0x18))
              (puVar2,piVar1[4] + piVar1[7],uVar3,piVar1[5] + piVar1[7],piVar1[0x16]);
  }
  return;
}

