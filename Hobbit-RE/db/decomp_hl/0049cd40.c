
void __thiscall
FUN_0049cd40(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [12];
  float *pfStack_8;
  float fStack_4;
  
  (**(code **)(*param_5 + 0x14))(param_2,0);
  *(float *)(param_1 + 0x6c) = *param_2;
  *(float *)(param_1 + 0x70) = param_2[1];
  *(float *)(param_1 + 0x74) = param_2[2];
  fVar1 = *(float *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x30) = DAT_0072a4b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fStack_50 = fVar1;
  fStack_4c = fVar1;
  fStack_48 = fVar1;
  uVar3 = FUN_00405080(auStack_44,&stack0xffffffa4,&fStack_50);
  FUN_004357e0(uVar3);
  uVar3 = FUN_00401f00(fVar1,fVar1,fVar1);
  uVar3 = FUN_00402130(auStack_2c,&stack0xffffffa4,uVar3);
  FUN_004357e0(uVar3);
  FUN_004357e0(auStack_20);
  FUN_004357e0(auStack_14);
  (**(code **)(*param_5 + 0x14))(param_2,0);
  fVar1 = pfStack_8[1];
  fVar2 = param_2[1];
  fStack_50 = pfStack_8[2] - param_2[2];
  *(float *)(param_1 + 0x48) = *pfStack_8 - *param_2;
  *(float *)(param_1 + 0x50) = fStack_50;
  *(float *)(param_1 + 0x4c) = fVar1 - fVar2;
  fVar1 = DAT_006e92e8 /
          SQRT(*(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
               *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48));
  iVar4 = FUN_0064cf30(fVar1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    *(float *)(param_1 + 0x48) = fVar1 * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x50) = fVar1 * *(float *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x50);
  *(float *)(param_1 + 4) = fStack_4 * *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = fStack_4 * *(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) = fStack_4 * *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x78) = *pfStack_8;
  *(float *)(param_1 + 0x7c) = pfStack_8[1];
  *(float *)(param_1 + 0x80) = pfStack_8[2];
  FUN_00401f00(*pfStack_8 - *param_2,pfStack_8[1] - param_2[1],pfStack_8[2] - param_2[2]);
  *(float *)(param_1 + 0x88) =
       SQRT(unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI + 0.0) * *(float *)(param_1 + 0x8c);
  FUN_00401f00(*pfStack_8 - *param_2,pfStack_8[1] - param_2[1],pfStack_8[2] - param_2[2]);
  fVar5 = (float10)FUN_00404890();
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(float *)(param_1 + 0x58) = fStack_4;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x70);
  *(float *)(param_1 + 0x84) = (float)(fVar5 / (float10)fStack_4);
  return;
}

