
void __thiscall FUN_00490100(int param_1,undefined4 *param_2)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_004064d0();
  FUN_004069b0(param_2);
  FUN_004065c0(&uStack_58);
  uStack_4c = uStack_58;
  uStack_48 = uStack_54;
  uStack_44 = uStack_50;
  FUN_004aaa80(&uStack_4c);
  FUN_004064d0();
  FUN_004069b0(param_2);
  FUN_004065c0(&uStack_4c);
  *(undefined4 *)(param_1 + 0x6c) = uStack_48;
  *(undefined4 *)(param_1 + 0x68) = uStack_4c;
  *(undefined4 *)(param_1 + 0x70) = uStack_44;
  *(undefined4 *)(param_1 + 0x130) = *param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2[1];
  *(undefined4 *)(param_1 + 0x138) = param_2[2];
  *(undefined4 *)(param_1 + 0x13c) = param_2[3];
  FUN_0048fd50();
  return;
}

