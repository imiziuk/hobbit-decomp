
undefined4 FUN_00658d20(undefined4 param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0;
  if ((uVar1 & 0x2000) != 0) {
    uVar3 = (uint)(param_2[2] >> 1);
  }
  uVar4 = *(int *)(param_3 + 0xf4) + 1;
  *(uint *)(param_3 + 0xf4) = uVar4;
  if (uVar4 < 0xb) {
    param_2 = param_2 + uVar3 + 2;
    switch(uVar1 >> 0xe) {
    case 0:
      uVar2 = FUN_00658800(param_1,param_2,param_3,param_4);
      *(int *)(param_3 + 0xf4) = *(int *)(param_3 + 0xf4) + -1;
      return uVar2;
    case 1:
      uVar2 = FUN_006588b0(param_1,param_2,param_3,param_4);
      *(int *)(param_3 + 0xf4) = *(int *)(param_3 + 0xf4) + -1;
      return uVar2;
    case 2:
      uVar2 = FUN_006589e0(param_1,param_2,param_3,param_4);
      *(int *)(param_3 + 0xf4) = *(int *)(param_3 + 0xf4) + -1;
      return uVar2;
    case 3:
      uVar2 = FUN_00658bf0(param_1,param_2,param_3,param_4);
      *(int *)(param_3 + 0xf4) = *(int *)(param_3 + 0xf4) + -1;
      return uVar2;
    }
  }
  *(int *)(param_3 + 0xf4) = *(int *)(param_3 + 0xf4) + -1;
  return 0;
}

