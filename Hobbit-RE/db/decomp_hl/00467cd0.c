
void __thiscall FUN_00467cd0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int *piStack_4c;
  int *local_38 [11];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0d88;
  pvStack_c = ExceptionList;
  piStack_4c = param_1 + 0x5c;
  ExceptionList = &pvStack_c;
  param_1[0x67] = param_2;
  FUN_00649b60();
  local_4 = 0;
  if (param_1[0x4a] != 0) {
    piStack_4c = (int *)s_LipSync_007267d4;
    FUN_0064a2e0();
  }
  if (param_1[0x67] != 0) {
    piStack_4c = (int *)&DAT_0075b6e0;
    iVar1 = FUN_0064a890(local_38);
    if (iVar1 != 0) {
      piStack_4c = (int *)param_1[0x67];
      iVar1 = FUN_0065a420();
      if (iVar1 != 0) {
        piStack_4c = (int *)0x467d77;
        piVar2 = (int *)(**(code **)(*param_1 + 0x154))();
        piStack_4c = piVar2;
        FUN_00549470();
        piStack_4c = piVar2;
        FUN_00549580();
        piStack_4c = local_38[0];
        iVar1 = FUN_0053cc70();
        if (-1 < iVar1) {
          piVar2 = param_1 + 0x4c;
          uVar3 = 4;
          piStack_4c = piVar2;
          (**(code **)(*param_1 + 0x154))(4);
          FUN_00541cc0(uVar3);
          ppiVar4 = &piStack_4c;
          (**(code **)(*param_1 + 0x154))(&piStack_4c);
          FUN_004258d0(ppiVar4);
          (**(code **)(*piVar2 + 4))();
          FUN_00549470(param_1 + 0x4d);
          FUN_00549580(param_1 + 0x4d);
          uVar5 = 0;
          uVar3 = FUN_0053cc70(unaff_EBX);
          FUN_005434b0(uVar3,uVar5);
          (**(code **)(*piVar2 + 0x10))(0x3f800000);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  piStack_4c = (int *)0x467e25;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

