
void __fastcall FUN_004d90d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float *unaff_retaddr;
  undefined1 auStack_44 [4];
  undefined1 local_40 [64];
  
  piVar2 = param_1 + 0x2a;
  iVar3 = 3;
  do {
    iVar1 = FUN_00549470(piVar2);
    if (iVar1 != 0) {
      FUN_00549580(piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(*param_1 + 0x34))(local_40);
  piVar2 = (int *)FUN_004d91c0(&stack0xffffffa4,auStack_44);
  param_1[0xb] = *piVar2;
  param_1[0xc] = piVar2[1];
  param_1[0xd] = piVar2[2];
  param_1[0xe] = piVar2[3];
  param_1[0xf] = piVar2[4];
  param_1[0x10] = piVar2[5];
  param_1[0x11] = param_1[0xb];
  param_1[0x12] = param_1[0xc];
  param_1[0x13] = param_1[0xd];
  param_1[0x14] = param_1[0xe];
  param_1[0x15] = param_1[0xf];
  param_1[0x16] = param_1[0x10];
  param_1[0x11] = (int)(*unaff_retaddr + (float)param_1[0x11]);
  param_1[0x12] = (int)((float)param_1[0x12] + unaff_retaddr[1]);
  param_1[0x13] = (int)(unaff_retaddr[2] + (float)param_1[0x13]);
  param_1[0x14] = (int)((float)param_1[0x14] + *unaff_retaddr);
  param_1[0x15] = (int)((float)param_1[0x15] + unaff_retaddr[1]);
  param_1[0x16] = (int)(unaff_retaddr[2] + (float)param_1[0x16]);
  (**(code **)(*param_1 + 0x14))(unaff_retaddr,0);
  return;
}

