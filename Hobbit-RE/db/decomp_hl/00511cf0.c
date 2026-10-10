
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511cf0(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_68;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7040;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = __ftol();
  uVar3 = __ftol(uVar2);
  iVar4 = FUN_00511770(uVar3,uVar2);
  if (iVar4 == 1) {
    FUN_00649b20(s_Health_00723028);
    local_4 = 0;
    fVar5 = (float10)FUN_00434cd0(local_64);
    fVar6 = (float10)FUN_00434c10();
    if (fVar6 <= (float10)(float)fVar5) {
LAB_00511d93:
      bVar1 = false;
    }
    else {
      fVar5 = (float10)FUN_00434ca0(0x30);
      if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) != (fVar5 == (float10)DAT_006e92e4))
      goto LAB_00511d93;
      bVar1 = true;
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
    if (bVar1) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_00649b20(s_Health_Potion_00722d1c);
      local_4 = 1;
      FUN_00434e10(local_64,0x3f800000);
      local_4 = 0xffffffff;
      FUN_00649ba0();
      FUN_00649b20(s_Health_00723028);
      local_4 = 2;
      FUN_00434d90(local_64,0x41c00000);
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
    else {
      FUN_00659600(s_OptionCancel_00723140,1);
    }
  }
  uVar2 = __ftol();
  uVar3 = __ftol(uVar2);
  iVar4 = FUN_00511770(uVar3,uVar2);
  if (iVar4 == 0) {
    fVar5 = (float10)FUN_00434ca0(0x1b);
    if ((float10)DAT_006e92e4 < fVar5) {
      fVar5 = (float10)FUN_00434ca0(0x31);
      if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) == (fVar5 == (float10)DAT_006e92e4)) {
        FUN_0041bcc0();
        iVar4 = FUN_00422450();
        if (iVar4 != 0) {
          FUN_00659600(s_OptionSelect_00723150,1);
          FUN_00649b20(s_Antidote_00722d10);
          local_4 = 3;
          FUN_00434e10(local_64,0x3f800000);
          local_4 = 0xffffffff;
          FUN_00649ba0();
          FUN_00434c40(0x1b,0);
          FUN_00434c40(0x1c,0);
          FUN_0041bcc0();
          FUN_00427270();
          goto LAB_00511f26;
        }
      }
    }
    FUN_00659600(s_OptionCancel_00723140,1);
  }
LAB_00511f26:
  uVar2 = __ftol();
  uVar3 = __ftol(uVar2);
  iVar4 = FUN_00511770(uVar3,uVar2);
  if (iVar4 == 2) {
    FUN_00649b20(s_Water_of_Vigor_00722d00);
    local_4 = 4;
    fVar5 = (float10)FUN_00434cd0(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    if ((NAN((float)fVar5) || NAN(DAT_006e92e4)) == ((float)fVar5 == DAT_006e92e4)) {
      FUN_00659600(s_OptionSelect_00723150,1);
      FUN_00649b20(s_Water_of_Vigor_00722d00);
      local_4 = 5;
      FUN_00434e10(local_38,0x3f800000);
      local_4 = 0xffffffff;
      FUN_00649ba0();
      FUN_00434c40(0x1b,0);
      FUN_00434c40(0x1c,0);
      fVar5 = (float10)FUN_00434ca0(6);
      local_68 = (float)(fVar5 + (float10)_DAT_006ec0ac);
      fVar5 = (float10)FUN_00434c10();
      if (fVar5 < (float10)local_68 != (NAN(fVar5) || NAN((float10)local_68))) {
        fVar5 = (float10)FUN_00434c10();
        fVar6 = (float10)FUN_00434ca0(6);
        local_68 = (float)((float10)(float)fVar5 - fVar6);
      }
      FUN_00434d10(6,local_68);
      fVar5 = (float10)FUN_00434c10();
      FUN_00434c40(4,(float)fVar5);
      FUN_0041bcc0();
      FUN_00427270();
      ExceptionList = local_c;
      return;
    }
    FUN_00659600(s_OptionCancel_00723140,1);
  }
  ExceptionList = local_c;
  return;
}

