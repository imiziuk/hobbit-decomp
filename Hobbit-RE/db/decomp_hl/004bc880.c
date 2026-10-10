
void FUN_004bc880(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_80 [128];
  
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_Radius_0072a57c);
  *(undefined4 *)(iVar1 + 0x84) = 0x20;
  *(undefined4 *)(iVar1 + 0xf8) = 0x41a00000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x42a00000;
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,s_Sync_Volume_0072c5a8);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x100) = 0x2f;
    *(undefined4 *)(iVar1 + 0x104) = 1;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Can_Flip_0072c59c);
      *(undefined4 *)(iVar1 + 0x84) = 2;
    }
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_Disabled_0072c590);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  FUN_004c3f80(param_1);
  iVar1 = FUN_00425010();
  FUN_00647d10(iVar1,s_RenderOrient_0072c580);
  *(undefined4 *)(iVar1 + 0x80) = 0xb;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0x40c90fdb;
  *(undefined4 *)(iVar1 + 0xe8) = 0x40c90fdb;
  *(undefined4 *)(iVar1 + 0xec) = 0x40c90fdb;
  *(undefined4 *)(iVar1 + 0x84) = 0x35;
  FUN_00647d10(auStack_80,s_RenderOrient_0072c580);
  FUN_00647dc0(auStack_80,s__Pitch_007207e8);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 10;
    FUN_00647d10(iVar1,auStack_80);
    *(undefined4 *)(iVar1 + 0x84) = 0x14;
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    *(undefined4 *)(iVar1 + 0xfc) = 0x40c90fdb;
  }
  FUN_00647d10(auStack_80,s_RenderOrient_0072c580);
  FUN_00647dc0(auStack_80,&DAT_007207e0);
  FUN_004bffd0(param_1,auStack_80,0x14,0,0x40c90fdb);
  FUN_00647d10(auStack_80,s_RenderOrient_0072c580);
  FUN_00647dc0(auStack_80,s__Roll_007207d8);
  FUN_004bffd0(param_1,auStack_80,0x14,0,0x40c90fdb);
  return;
}

