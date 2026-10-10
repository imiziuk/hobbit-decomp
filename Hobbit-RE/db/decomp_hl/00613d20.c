
void __thiscall FUN_00613d20(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_006197d0();
  FUN_00618c20();
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_00618b50(&uStack_c);
  FUN_00617a40(param_2);
  FUN_00618690(param_2);
  FUN_00618cd0(param_2);
  FUN_00619660(param_2);
  if (*(short *)(param_1 + 0x42) == 0) {
    param_3 = 6;
    piVar1 = (int *)FUN_005af120();
    (**(code **)(*piVar1 + 0x154))();
    FUN_00541cc0(4,(int *)(param_1 + 0x5c8));
    FUN_006cded0(s_attack_breath_007493f0,3,1,0);
    (**(code **)(*(int *)(param_1 + 0x5c8) + 0x10))(0);
    *(undefined4 *)(param_1 + 0x5f4) = 0;
    FUN_00541cc0(5,(int *)(param_1 + 0x5f8));
    FUN_006cded0(s_attack_look_007493e4,3,1,1);
    (**(code **)(*(int *)(param_1 + 0x5f8) + 0x10))(0);
    *(undefined4 *)(param_1 + 0x624) = 0;
    FUN_00541cc0(6,(int *)(param_1 + 0x628));
    FUN_00549470(param_1 + 0x62c);
    FUN_00549580(param_1 + 0x62c);
    uVar2 = FUN_0053cc70(s_attack_head_track_007493d0);
    *(undefined4 *)(param_1 + 0x630) = uVar2;
    *(undefined4 *)(param_1 + 0x634) = 3;
    *(undefined4 *)(param_1 + 0x638) = 3;
    (**(code **)(*(int *)(param_1 + 0x628) + 0x10))(0);
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_006140f0(param_2);
      param_3 = 8;
    }
    break;
  case 6:
    iVar3 = FUN_00647b10(0,100);
    param_3 = (uint)(iVar3 < 0x1e) * 2 + 5;
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_00619500();
      param_3 = 5;
    }
    break;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) {
      FUN_006175c0(0);
    }
    else {
      param_3 = 9;
    }
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 7;
    }
  }
  FUN_005be370(param_2,param_3);
  return;
}

