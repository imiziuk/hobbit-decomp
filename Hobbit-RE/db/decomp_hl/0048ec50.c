
void __fastcall FUN_0048ec50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [40];
  int *piStack_1c;
  float fStack_18;
  float fStack_14;
  
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  if (param_1[0x6c] == 0) {
    fStack_50 = (float)param_1[0x5e] + (float)param_1[0x61];
    pfStack_5c = &fStack_50;
    fStack_4c = (float)param_1[0x5f] + (float)param_1[0x62];
    fStack_48 = (float)param_1[0x60] + (float)param_1[99];
    (**(code **)(*param_1 + 0x110))();
    uVar3 = 1;
  }
  else {
    pfStack_5c = (float *)(param_1 + 0x5e);
    (**(code **)(*param_1 + 0x110))();
    uVar3 = 4;
  }
  FUN_00491450(uVar3);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x5a] = 0;
  iVar1 = FUN_004021c0(param_1[0x58],param_1[0x59]);
  if (iVar1 != 0) {
    FUN_004adc40(param_1[0x5b],auStack_44);
    piVar2 = (int *)FUN_0064d8e0(&stack0xffffffac);
    param_1[0x4c] = *piVar2;
    param_1[0x4d] = piVar2[1];
    param_1[0x4e] = piVar2[2];
    param_1[0x4f] = piVar2[3];
    (**(code **)(*param_1 + 0x10c))(param_1 + 0x4c);
    param_1[0x69] = (int)((float)piStack_1c - (float)param_1[5]);
    param_1[0x6b] = (int)(fStack_14 - (float)param_1[7]);
    param_1[0x6a] = (int)(fStack_18 - (float)param_1[6]);
    pfStack_5c = (float *)piStack_1c;
    (**(code **)(*param_1 + 0x110))(&pfStack_5c);
  }
  return;
}

