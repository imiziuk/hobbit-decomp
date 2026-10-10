
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6230(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5,float param_6,float param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  uVar2 = param_2;
  uVar1 = param_1;
  local_8 = param_4;
  local_c = param_3;
  local_4 = param_5;
  iVar3 = FUN_004021c0(param_1,param_2);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x7c) == '\x1c') {
      lVar4 = FUN_005af0f0();
      FUN_004021c0(lVar4);
      FUN_00579720(0,0,&local_c,&param_6,0x850);
      FUN_00579910(uVar1,uVar2);
      FUN_005798f0(3);
      iVar3 = FUN_00577e70();
      if ((iVar3 != 0) && (lVar4 != CONCAT44(DAT_00773524,DAT_00773520))) {
        iVar3 = FUN_004021c0(DAT_00773520,DAT_00773524);
        param_4 = *(float *)(iVar3 + 0x54) + *(float *)(iVar3 + 0x48);
        param_6 = (*(float *)(iVar3 + 0x44) + *(float *)(iVar3 + 0x50)) * _DAT_006e936c;
        param_7 = param_4 * _DAT_006e936c;
        param_5 = (*(float *)(iVar3 + 0x58) + *(float *)(iVar3 + 0x4c)) * _DAT_006e936c;
        param_8 = param_5;
      }
    }
    param_1 = 0xffb4e6ff;
    FUN_00551520(&local_c,&param_6,0x41200000,0xbfa00000,0x3dcccccd,0xbd4ccccd,10,0x3f000000,
                 &param_1,0);
  }
  return;
}

