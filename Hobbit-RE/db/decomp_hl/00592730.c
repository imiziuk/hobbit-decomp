
void __thiscall FUN_00592730(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int *piStack_14;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_1 + 0x98);
    uVar2 = 3;
    piStack_14 = piVar1;
    FUN_00592190(3);
    FUN_00541cc0(uVar2);
    ppiVar3 = &piStack_14;
    FUN_00592190(&piStack_14);
    FUN_004258d0(ppiVar3);
    (**(code **)(*piVar1 + 4))();
    FUN_00549470(param_1 + 0x9c);
    FUN_00549580(param_1 + 0x9c);
    uVar4 = 0x3f400000;
    uVar2 = FUN_0053cc70(param_2 + 8);
    FUN_005434b0(uVar2,uVar4);
    (**(code **)(*piVar1 + 0x10))(0x3f800000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005927ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x98) + 0x10))();
  return;
}

