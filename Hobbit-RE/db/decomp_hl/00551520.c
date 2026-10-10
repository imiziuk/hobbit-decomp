
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00551520(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,
            float param_7,int param_8,float param_9,undefined1 *param_10,undefined4 param_11)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined2 *local_7c;
  float local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  
  local_58 = FUN_005522c0(&local_7c);
  if (local_7c == (undefined2 *)0x0) {
    return 0xffffffff;
  }
  FUN_0064cbe0();
  FUN_0064cc00();
  FUN_005524d0(local_7c,1,param_2,param_3,param_4,param_5,param_9);
  *(undefined1 *)((int)local_7c + 0xf) = param_10[3];
  *(undefined1 *)(local_7c + 7) = param_10[2];
  *(undefined1 *)((int)local_7c + 0xd) = param_10[1];
  *(undefined1 *)(local_7c + 6) = *param_10;
  *(undefined1 *)((int)local_7c + 0x13) = 0;
  *(undefined1 *)(local_7c + 9) = 0x80;
  *(undefined1 *)((int)local_7c + 0x11) = 200;
  *(undefined1 *)(local_7c + 8) = 0xff;
  *local_7c = DAT_0073d2e4;
  *(undefined4 *)(local_7c + 4) = param_11;
  fVar2 = *param_3 - *param_2;
  local_74 = 0;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  local_40 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  fVar9 = (float10)FUN_0064ca10(fVar3,SQRT(fVar2 * fVar2 + fVar4 * fVar4));
  local_3c = (float)-fVar9;
  fVar9 = (float10)FUN_0064ca10(fVar2,fVar4);
  local_34 = (float)fVar9;
  iVar8 = 0;
  do {
    fVar9 = (float10)FUN_00647b30(0,0x3f800000);
    if (fVar9 < (float10)param_6 != (NAN(fVar9) || NAN((float10)param_6))) {
      local_74 = local_74 + 1;
      puVar7 = (undefined2 *)FUN_005523d0(local_58);
      fVar2 = _DAT_006e95a8;
      if (puVar7 == (undefined2 *)0x0) break;
      *(undefined1 *)((int)puVar7 + 0xf) = param_10[3];
      *(undefined1 *)(puVar7 + 7) = param_10[2];
      *(undefined1 *)((int)puVar7 + 0xd) = param_10[1];
      *(undefined1 *)(puVar7 + 6) = *param_10;
      *(undefined1 *)((int)puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 9) = 0x80;
      *(undefined1 *)((int)puVar7 + 0x11) = 200;
      *(undefined1 *)(puVar7 + 8) = 0xff;
      *puVar7 = DAT_0073d2e4;
      *(undefined4 *)(puVar7 + 4) = param_11;
      local_4c = *(float *)(*(int *)(local_7c + 2) + 0xc + iVar8);
      iVar1 = *(int *)(local_7c + 2) + 0xc + iVar8;
      local_48 = *(float *)(iVar1 + 4);
      local_44 = *(float *)(iVar1 + 8);
      fVar3 = param_9;
      if (param_9 < fVar2) {
        fVar3 = _DAT_006e95a8;
      }
      fVar9 = (float10)FUN_00647b30(0,fVar3 * _DAT_006e99cc);
      local_78 = (float)fVar9;
      fVar9 = (float10)FUN_00647b30(0,0x40c90fdb);
      local_38 = (float)fVar9;
      fVar2 = ((DAT_006e92e8 - local_78 * _DAT_006f3e28) * _DAT_006e99a4 + _DAT_006e95b0) * local_40
              * _DAT_006e936c;
      FUN_0064c8e0(local_78,&local_64,&local_60);
      fVar3 = local_60 * DAT_006e92e4 + fVar2 * local_64;
      fVar2 = fVar2 * local_60 - local_64 * DAT_006e92e4;
      FUN_0064c8e0(local_38,&local_50,&local_68);
      fVar6 = local_68 * fVar3 - local_50 * DAT_006e92e4;
      fVar5 = local_68 * DAT_006e92e4 + fVar3 * local_50;
      FUN_0064c8e0(local_3c,&local_5c,&local_54);
      fVar3 = fVar5 * local_54;
      fVar4 = fVar2 * local_5c;
      fVar2 = fVar5 * local_5c + fVar2 * local_54;
      FUN_0064c8e0(local_34,&local_70,&local_6c);
      local_30 = local_6c * fVar6 + fVar2 * local_70 + local_4c;
      local_2c = (fVar3 - fVar4) + local_48;
      local_28 = (fVar2 * local_6c - fVar6 * local_70) + local_44;
      local_78 = param_4 * _DAT_006e936c;
      local_1c = local_28;
      FUN_005524d0(puVar7,0,&local_4c,&local_30,local_78,local_78 * _DAT_006f3e24 * _DAT_006e9370,
                   param_9);
    }
    if (param_8 <= local_74) break;
    iVar8 = iVar8 + 0x24;
    param_4 = param_4 + param_5;
    param_6 = param_6 + param_7;
  } while (iVar8 < 0x438);
  fVar9 = (float10)FUN_0064cd30();
  *param_1 = (float)fVar9;
  if (fVar9 <= (float10)param_1[1]) {
    return local_58;
  }
  param_1[1] = (float)fVar9;
  return local_58;
}

