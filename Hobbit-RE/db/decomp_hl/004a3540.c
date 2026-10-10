
undefined4 __thiscall FUN_004a3540(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 uVar6;
  undefined4 in_stack_fffffff0;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_2 == 1) {
    piVar2 = (int *)FUN_004021c0(param_2[2],param_2[3]);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
    uVar1 = 0x4a35cb;
    iVar4 = FUN_005aa880(*puVar3,puVar3[1],puVar3[2]);
    if ((((iVar4 != 0) || (param_2[6] == 0)) && (*(int *)(param_1 + 0x1a4) != 0)) &&
       (*(int *)(param_1 + 0x244) != 0)) {
      uVar6 = 0x4a3608;
      piVar2 = (int *)FUN_004021c0(param_2[4],param_2[5]);
      if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 4) & 0x50) != 0)) {
        iVar4 = FUN_004683d0(piVar2);
        if (iVar4 != 0) {
          uVar8 = 1;
          uVar7 = 0x4a3629;
          uVar5 = (**(code **)(*piVar2 + 0x28))(1);
          FUN_004357e0(uVar5);
          FUN_005aa7f0(uVar1,uVar6,uVar7,uVar8);
          iVar4 = *(int *)(param_1 + 0x300);
          if (((iVar4 != 0) && (*(int *)(iVar4 + 0xbc) != 0)) &&
             (*(char *)(*(int *)(iVar4 + 0xbc) + 0x44) == '\x01')) {
            *(undefined4 *)(iVar4 + 0x50) = 1;
            uVar8 = 1;
            uVar7 = 0x4a3669;
            uVar5 = (**(code **)(*piVar2 + 0x28))(1);
            FUN_004357e0(uVar5);
            FUN_005aa7f0(uVar1,uVar6,uVar7,uVar8);
          }
        }
      }
    }
    return 1;
  }
  if (*param_2 != 3) {
    uVar1 = FUN_005afc70(param_2);
    return uVar1;
  }
  iVar4 = param_2[7];
  FUN_004357e0(param_2 + 4);
  FUN_005aa9e0(param_2[2],param_2[3],in_stack_ffffffe8,in_stack_ffffffec,in_stack_fffffff0,iVar4);
  return 1;
}

