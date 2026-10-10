
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004f60b0(int param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_5 == 0.0) {
    param_5 = *(float *)(param_1 + 0x570);
  }
  else {
    param_5 = 1.0;
  }
  local_48 = _DAT_0075f7d0 * param_5;
  local_44 = _DAT_0075f7d4 * param_5;
  local_4c = param_1;
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x1d4,0);
  iVar1 = FUN_0052d730();
  if ((iVar1 == 0) || (DAT_00763e30 != 0)) {
    fVar3 = param_2 - (float)_DAT_006efa80;
    uVar5 = 0x80000000;
    pfVar4 = &local_48;
    local_50 = fVar3;
    uVar2 = FUN_00401f00(fVar3,param_3,0);
    FUN_0066e5a0(uVar2,pfVar4,uVar5);
  }
  else {
    fVar3 = param_2 - (float)_DAT_006efa80;
    pfVar4 = &local_48;
    uVar5 = 0x80000000;
    local_50 = fVar3;
    uVar2 = FUN_00401f00(fVar3,param_3,0);
    FUN_0066e5a0(uVar2,pfVar4,uVar5);
  }
  pfVar4 = &local_48;
  uVar2 = FUN_00401f00(fVar3,param_3,0);
  FUN_0066e5a0(uVar2,pfVar4);
  FUN_0066d9a0();
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x1d4,0);
  local_50 = (float)__ftol();
  local_48 = local_48 * _DAT_006e9370;
  iVar1 = FUN_0052d730();
  if ((iVar1 == 0) || (DAT_00763e30 != 0)) {
    pfVar4 = &local_48;
    fVar3 = (float)(int)local_50 + param_2;
    uVar5 = 0x80000000;
    local_50 = fVar3;
    uVar2 = FUN_00401f00(fVar3,param_3,0);
    FUN_0066e5a0(uVar2,pfVar4,uVar5);
  }
  else {
    pfVar4 = &local_48;
    fVar3 = (float)(int)local_50 + param_2;
    uVar5 = 0x80000000;
    local_50 = fVar3;
    uVar2 = FUN_00401f00(fVar3,param_3,0);
    FUN_0066e5a0(uVar2,pfVar4,uVar5);
  }
  pfVar4 = &local_48;
  uVar5 = 0xffffffff;
  uVar2 = FUN_00401f00(fVar3,param_3,0);
  FUN_0066e5a0(uVar2,pfVar4,uVar5);
  FUN_0066d9a0();
  local_48 = local_48 * _DAT_006e9370;
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(local_4c + 500,0);
  local_50 = 0.0;
  do {
    fVar3 = local_50;
    iVar1 = FUN_0052d730();
    if ((iVar1 == 0) || (DAT_00763e30 != 0)) {
      local_50 = (float)(int)local_50;
      uVar5 = 0x80000000;
      pfVar4 = &local_48;
      uVar2 = FUN_00401f00(local_50 * local_48 + param_2,param_3,0);
      FUN_0066e5a0(uVar2,pfVar4,uVar5);
    }
    else {
      local_50 = (float)(int)local_50;
      pfVar4 = &local_48;
      uVar5 = 0x80000000;
      uVar2 = FUN_00401f00(local_50 * local_48 + param_2,param_3,0);
      FUN_0066e5a0(uVar2,pfVar4,uVar5);
    }
    pfVar4 = &local_48;
    uVar2 = FUN_00401f00(local_50 * local_48 + param_2,param_3,0);
    FUN_0066e5a0(uVar2,pfVar4);
    local_50 = (float)((int)fVar3 + 1);
  } while ((int)local_50 < 0x10);
  FUN_0066d9a0();
  local_4c = __ftol();
  local_50 = (float)local_4c;
  local_51 = 0xff;
  local_52 = 0;
  local_53 = 0;
  local_54 = 0;
  FUN_0052d730();
  local_10 = __ftol();
  local_c = __ftol();
  local_8 = __ftol();
  local_4 = __ftol();
  FUN_0069fd50(&local_10,&local_54,&local_54,&local_54,&local_54,0);
  return;
}

