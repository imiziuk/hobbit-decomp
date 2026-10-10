
void __thiscall FUN_005b9520(int param_1,int param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_18;
  
  iStack_18 = 0x5b952c;
  FUN_005baae0();
  iStack_18 = param_2;
  FUN_005ba910();
  if (*(int *)(param_1 + 0x78) == 0) {
    iStack_18 = -1;
    FUN_004f8a30();
  }
  else {
    iStack_18 = param_2;
    FUN_005bafa0();
    iStack_18 = param_2;
    FUN_005baf00();
  }
  if (*(short *)(param_1 + 0x42) == 0) {
    param_3 = 5;
    iStack_18 = 0x5b9578;
    piVar2 = (int *)FUN_005af120();
    iStack_18 = 0x5b9582;
    (**(code **)(*piVar2 + 0x154))();
    iStack_18 = param_1 + 0xb0;
    FUN_00541cc0(4);
    iStack_18 = 1;
    FUN_006cded0(s_alert_neck_00745760,3,1);
    FUN_004258d0(&iStack_18);
    (**(code **)(*(int *)(param_1 + 0xe0) + 4))();
    FUN_00549470(param_1 + 0xe4);
    FUN_00549580(param_1 + 0xe4);
    uVar5 = 0x3f400000;
    uVar3 = FUN_0053cc70(s__alert_tail_00745753 + 1);
    FUN_005434b0(uVar3,uVar5);
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x10))(0x3f800000);
    fVar1 = DAT_006e92e8;
    if (*(float *)(param_1 + 0x90) <= DAT_006e92e8) {
      fVar1 = *(float *)(param_1 + 0x90);
    }
    *(float *)(param_1 + 0x90) = fVar1;
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = DAT_006e92e4;
    }
    *(float *)(param_1 + 0x90) = fVar1;
    *(float *)(param_1 + 0x104) = fVar1;
  }
  iStack_18 = 0x5b965d;
  FUN_005baae0();
  iStack_18 = 0x5b9664;
  FUN_005bada0();
  if (*(short *)(param_1 + 0x42) == 5) {
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      iStack_18 = 100;
      iVar4 = FUN_00647b10(0);
      param_3 = (iVar4 < 1) + 5;
    }
  }
  else if (*(short *)(param_1 + 0x42) == 6) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 5;
    }
  }
  else {
    param_3 = 5;
  }
  iStack_18 = param_3;
  FUN_005be370(param_2);
  return;
}

