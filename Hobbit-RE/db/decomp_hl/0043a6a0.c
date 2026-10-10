
void __fastcall FUN_0043a6a0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float local_1c [3];
  undefined1 local_10 [16];
  
  if (param_1[0x102] != 0 || param_1[0x103] != 0) {
    piVar1 = (int *)FUN_004021c0(param_1[0x102],param_1[0x103]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x114))();
    }
    param_1[0x102] = 0;
    param_1[0x103] = 0;
  }
  if (param_1[0x1658] == 0) {
    FUN_004430e0(2);
  }
  else {
    (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_1c,local_10);
    if (local_1c[0] < *(float *)(param_1[0x114] + 0x1b8) ==
        (NAN(local_1c[0]) || NAN(*(float *)(param_1[0x114] + 0x1b8)))) {
      FUN_004430e0(2);
    }
    else {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar5 = 0x3e000000;
      uVar4 = 1;
      uVar3 = 0;
      uVar2 = FUN_0053cc70(s_SLIDE_FLAT_007205dc);
      FUN_00540840(uVar2,uVar3,uVar4,uVar5);
      FUN_004430e0(0xd);
    }
    param_1[0x165a] = param_1[0x2a];
    param_1[0x165b] = param_1[0x2b];
    param_1[0x29b] = 0;
  }
  if (param_1[0x1d2] != 0xd) {
    param_1[0x1d7] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d5] = 0;
  }
  param_1[0x270] = 0;
  param_1[0x119c] = 0;
  param_1[0x119d] = 0;
  param_1[0x17b0] = 1;
  return;
}

