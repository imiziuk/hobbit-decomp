
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00669ef0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined4 local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined4 local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  float local_218 [2];
  float local_210;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined1 local_1d8 [64];
  undefined1 local_198 [8];
  undefined4 uStack_190;
  undefined1 local_18c [192];
  undefined1 local_cc [12];
  undefined1 local_c0 [192];
  
  FUN_00401f00(*param_2 - *param_1,param_2[1] - param_1[1],param_2[2] - param_1[2]);
  local_280 = SQRT(local_278 * local_278 + local_270 * local_270 + local_274 * local_274);
  fVar1 = DAT_006e92e8 / local_280;
  local_278 = local_278 * fVar1;
  local_274 = local_274 * fVar1;
  local_270 = local_270 * fVar1;
  fVar4 = (float10)FUN_0064ca10(local_274,SQRT(local_278 * local_278 + local_270 * local_270));
  local_27c = (float)-fVar4;
  fVar4 = (float10)FUN_0064ca10(local_278,local_270);
  local_26c = (float)fVar4;
  local_264 = param_3;
  local_238 = 0;
  local_248 = 0;
  local_260 = param_3 * DAT_006e92e4;
  local_258 = 0;
  local_228 = 0x3f800000;
  local_268 = local_280 * DAT_006e92e4;
  local_23c = local_280;
  local_250 = param_3;
  local_25c = local_268;
  local_254 = local_260;
  local_24c = local_268;
  local_244 = local_260;
  local_240 = local_260;
  local_234 = local_260;
  local_230 = local_260;
  local_22c = local_268;
  if ((NAN(local_27c) || NAN(DAT_006e92e4)) == (local_27c == DAT_006e92e4)) {
    FUN_0064c8e0(local_27c,&local_27c,&local_280);
    FUN_004064d0();
    local_1f4 = -local_27c;
    local_204 = local_280;
    local_200 = local_27c;
    local_1f0 = local_280;
    uVar2 = FUN_0064e040(local_1d8,local_218,&local_264);
    FUN_00406570(uVar2);
  }
  if ((NAN(local_26c) || NAN(DAT_006e92e4)) == (local_26c == DAT_006e92e4)) {
    FUN_0064c8e0(local_26c,&local_26c,&local_27c);
    FUN_004064d0();
    local_210 = -local_26c;
    local_218[0] = local_27c;
    local_1f8 = local_26c;
    local_1f0 = local_27c;
    uVar2 = FUN_0064e040(local_1d8,local_218,&local_264);
    FUN_00406570(uVar2);
  }
  FUN_00420470(param_1);
  local_280 = 0.0;
  iVar3 = 0;
  do {
    local_224 = 0x3f800000;
    local_220 = 0;
    local_21c = 0;
    FUN_004357e0(&local_224);
    FUN_00428790((float)(int)local_280 * _DAT_006e9598 * _DAT_006f406c);
    FUN_004357e0(local_cc + iVar3);
    *(undefined4 *)((int)&uStack_190 + iVar3) = 0x3f800000;
    local_280 = (float)((int)local_280 + 1);
    iVar3 = iVar3 + 0xc;
  } while (iVar3 < 0xcc);
  FUN_00550f70(local_cc,local_cc,0x11);
  FUN_00550f70(local_198,local_198,0x11);
  FUN_0066c3a0(1,0);
  FUN_00425250(&stack0x00000010);
  FUN_0066ddd0();
  iVar3 = 0;
  do {
    FUN_0066de80(local_cc + iVar3);
    FUN_0066de80(local_c0 + iVar3);
    FUN_0066de80(local_198 + iVar3);
    FUN_0066de80(local_18c + iVar3);
    FUN_0066de80(local_cc + iVar3);
    FUN_0066de80(local_198 + iVar3);
    iVar3 = iVar3 + 0xc;
  } while (iVar3 < 0xc0);
  FUN_0066d9a0();
  return;
}

