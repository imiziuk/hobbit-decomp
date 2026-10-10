
void __thiscall
FUN_00493c70(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,float param_5,
            float param_6,int param_7,uint param_8,int param_9,undefined1 param_10)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  (**(code **)(*param_1 + 0x48))(param_2);
  fVar1 = DAT_006e92e8;
  *(byte *)((int)param_1 + 0x111) = *(byte *)((int)param_1 + 0x111) | 0x10;
  param_1[0x43] = 1;
  *(char *)((int)param_1 + 0xcf) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)param_1 + 0xce) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)param_1 + 0xcd) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x33) = (char)param_3;
  param_1[0x35] = param_4;
  if (param_5 < fVar1) {
    param_5 = DAT_006e92e8;
  }
  param_1[0x38] = (int)param_5;
  fVar1 = param_5 + DAT_006e92e8;
  if (param_5 + DAT_006e92e8 <= param_6) {
    fVar1 = param_6;
  }
  param_1[0x39] = (int)fVar1;
  if (param_7 == -1) {
    param_8 = FUN_00493850(param_2);
    FUN_004946a0(param_8 & 1);
    param_8 = param_8 & 2;
  }
  else {
    FUN_004946a0(param_7);
  }
  FUN_004946d0(param_8);
  FUN_00493b80();
  fVar1 = (float)param_1[0x39];
  fVar2 = -fVar1;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_00401f00(fVar2,fVar2,fVar2);
  iStack_18 = iStack_48;
  iStack_14 = iStack_44;
  fStack_40 = fVar1;
  fStack_3c = fVar1;
  fStack_38 = fVar1;
  iStack_1c = unaff_ESI;
  uVar3 = FUN_00402130(auStack_28,&uStack_34,&fStack_40);
  FUN_004357e0(uVar3);
  param_1[0xb] = iStack_1c;
  param_1[0xc] = iStack_18;
  param_1[0xd] = iStack_14;
  param_1[0xe] = iStack_10;
  param_1[0xf] = iStack_c;
  param_1[0x10] = iStack_8;
  param_1[0x42] = param_9;
  *(undefined1 *)(param_1 + 0x44) = param_10;
  iVar4 = FUN_00494680();
  if (iVar4 != 0) {
    FUN_005832c0(param_1 + 0x11);
  }
  (**(code **)(*param_1 + 0x14))(param_2,0);
  return;
}

