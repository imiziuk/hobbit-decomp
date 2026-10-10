
void __fastcall FUN_00591c30(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 uVar3;
  int **ppiVar4;
  int *piStack_1c;
  
  piStack_1c = (int *)0xfffffffe;
  iVar2 = FUN_00593dd0(0x40,1);
  if (iVar2 != 0) {
    piVar1 = (int *)(param_1 + 0xd8);
    uVar3 = 2;
    piStack_1c = piVar1;
    FUN_00592190(2);
    FUN_00541cc0(uVar3);
    ppiVar4 = &piStack_1c;
    FUN_00592190(&piStack_1c);
    FUN_004258d0(ppiVar4);
    (**(code **)(*piVar1 + 4))();
    FUN_00549470(param_1 + 0xdc);
    FUN_00549580(param_1 + 0xdc);
    uVar3 = FUN_0053cc70(unaff_EBX + 8);
    *(undefined4 *)(param_1 + 0xe0) = uVar3;
    *(undefined4 *)(param_1 + 0xe4) = 3;
    *(undefined4 *)(param_1 + 0xe8) = 3;
    (**(code **)(*piVar1 + 0x10))(0x3f800000);
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
  return;
}

