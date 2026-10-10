
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446330(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  char *pcVar6;
  float local_9c;
  undefined1 local_94 [44];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf9e3;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return;
  }
  ExceptionList = &local_c;
  FUN_0064afa0();
  local_4 = 0;
  FUN_004b0e70(local_94);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar4 = (float10)FUN_004b0f50();
  fVar1 = (float)fVar4;
  FUN_00422360();
  local_60 = *(undefined4 *)(param_1 + 8);
  local_5c = *(undefined4 *)(param_1 + 0xc);
  local_68[0] = 0x19;
  if (DAT_0075cf1c != 0) {
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_68);
  }
  fVar4 = (float10)FUN_00434ca0(4);
  if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) != (fVar4 == (float10)DAT_006e92e4))
  goto switchD_004467cb_caseD_2;
  uVar2 = FUN_00434eb0(local_94);
  switch(uVar2) {
  case 1:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    FUN_00659600(s_CoinsToInventory_00724428,1);
    uVar2 = FUN_00434eb0(local_94);
    switch(uVar2) {
    case 1:
    case 0xf:
      FUN_00434d10(1,fVar1);
      FUN_00434d10(0x18,fVar1);
      break;
    case 0x10:
      FUN_00434d10(1,0x40a00000);
      FUN_00434d10(0x18,0x40a00000);
      break;
    case 0x11:
      FUN_00434d10(1,0x41200000);
      FUN_00434d10(0x18,0x41200000);
      break;
    case 0x12:
      FUN_00434d10(1,0x41c80000);
      FUN_00434d10(0x18,0x41c80000);
      break;
    case 0x13:
      FUN_00434d10(1,0x42480000);
      FUN_00434d10(0x18,0x42480000);
      break;
    case 0x14:
      FUN_00434d10(1,0x42c80000);
      FUN_00434d10(0x18,0x42c80000);
    }
    goto switchD_004467cb_caseD_2;
  case 2:
    FUN_00659600(s_RocksPickup_0072443c,1);
    fVar4 = (float10)FUN_004b0f50();
    FUN_00434d10(2,(float)fVar4);
    goto switchD_004467cb_caseD_2;
  default:
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    break;
  case 4:
    FUN_00659600(s_HealthPickup_007244ac,1);
    FUN_00434d10(4,0x40800000);
    goto switchD_004467cb_caseD_2;
  case 5:
    pcVar6 = s_HealthPickup_007244ac;
LAB_00446495:
    FUN_00659600(pcVar6,1);
    FUN_00434d10(4,0x41a00000);
    goto switchD_004467cb_caseD_2;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    local_9c = 1.4013e-45;
    uVar2 = FUN_00434eb0(local_94);
    switch(uVar2) {
    case 9:
      FUN_004b0f50();
      local_9c = (float)__ftol();
      break;
    case 10:
      local_9c = 1.4013e-45;
      break;
    case 0xb:
      local_9c = 7.00649e-45;
      break;
    case 0xc:
      local_9c = 1.4013e-44;
      break;
    case 0xd:
      local_9c = 3.50325e-44;
      break;
    case 0xe:
      local_9c = 7.00649e-44;
    }
    FUN_00659600(s_CPPickup01_00724448,1);
    fVar1 = (float)(int)local_9c;
    FUN_00434d10(9,fVar1);
    FUN_00434d10(7,fVar1);
    FUN_00434d10(8,fVar1);
    goto switchD_004467cb_caseD_2;
  case 0x20:
  case 0x21:
  case 0x22:
    iVar3 = FUN_00434eb0(local_94);
    if (iVar3 == 0x20) {
      uVar2 = 0x23;
LAB_00446ac4:
      FUN_00434c40(uVar2,0x3f800000);
    }
    else {
      iVar3 = FUN_00434eb0(local_94);
      if (iVar3 == 0x21) {
        FUN_00434c40(0x24,0x3f800000);
      }
      else {
        iVar3 = FUN_00434eb0(local_94);
        if (iVar3 == 0x22) {
          uVar2 = 0x25;
          goto LAB_00446ac4;
        }
      }
    }
    break;
  case 0x30:
    fVar4 = (float10)FUN_00434ca0(0x30);
    fVar5 = (float10)FUN_00434fb0(0x30);
    if ((NAN(fVar5) || NAN((float10)(float)fVar4)) != (fVar5 == (float10)(float)fVar4)) {
      fVar4 = (float10)FUN_00434ca0(4);
      fVar5 = (float10)FUN_00434c10();
      if ((float10)(float)fVar4 < fVar5) {
        pcVar6 = s_QuestItemPickup_0071df88;
        goto LAB_00446495;
      }
    }
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_HEALTH_POTION_ACQUIRED_00724490);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    break;
  case 0x31:
    fVar4 = (float10)FUN_00434ca0(0x31);
    fVar5 = (float10)FUN_00434fb0(0x31);
    if (((NAN(fVar5) || NAN((float10)(float)fVar4)) != (fVar5 == (float10)(float)fVar4)) &&
       (iVar3 = FUN_00422450(), iVar3 != 0)) {
      FUN_00659600(s_QuestItemPickup_0071df88,1);
      FUN_00427270();
      goto switchD_004467cb_caseD_2;
    }
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_ANTIDOTE_POTION_ACQUIRED_00724470);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    break;
  case 0x32:
    fVar4 = (float10)FUN_00434ca0(0x32);
    fVar5 = (float10)FUN_00434fb0(0x32);
    if ((NAN(fVar5) || NAN((float10)(float)fVar4)) != (fVar5 == (float10)(float)fVar4)) {
      FUN_00434c40(0x1b,0);
      FUN_00434c40(0x1c,0);
      local_9c = 40.0;
      fVar4 = (float10)FUN_00434c10();
      if (fVar4 < (float10)_DAT_006ec0ac != (NAN(fVar4) || NAN((float10)_DAT_006ec0ac))) {
        fVar4 = (float10)FUN_00434c10();
        local_9c = (float)fVar4;
      }
      FUN_00434d10(6,local_9c);
      fVar4 = (float10)FUN_00434c10();
      FUN_00434c40(4,(float)fVar4);
      FUN_00427270();
      FUN_00659600(s_QuestItemPickup_0071df88,1);
      goto switchD_004467cb_caseD_2;
    }
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_WATER_POTION_ACQUIRED_00724454);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    break;
  case 0x36:
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_EXPLOD_ROCKS_ACQUIRED_007243f4);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    fVar4 = (float10)FUN_00434ca0(0x37);
    if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
      uVar2 = 0x37;
LAB_0044697e:
      FUN_00434c40(uVar2,0);
    }
    goto LAB_00446988;
  case 0x37:
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_FIRE_ROCKS_ACQUIRED_00724410);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    fVar4 = (float10)FUN_00434ca0(0x36);
    if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
      uVar2 = 0x36;
      goto LAB_0044697e;
    }
LAB_00446988:
    fVar4 = (float10)FUN_00434ca0(0x38);
    if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
      FUN_00434c40(0x38,0);
    }
    break;
  case 0x38:
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_FREEZE_ROCKS_ACQUIRED_007243d8);
    FUN_0064b7b0(uVar2);
    FUN_00526640(&DAT_0071da20,local_58,0);
    FUN_00659600(s_QuestItemPickup_0071df88,1);
    fVar4 = (float10)FUN_00434ca0(0x37);
    if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
      FUN_00434c40(0x37,0);
    }
    fVar4 = (float10)FUN_00434ca0(0x36);
    if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
      FUN_00434c40(0x36,0);
    }
  }
  FUN_00434d90(local_94,fVar1);
switchD_004467cb_caseD_2:
  FUN_004b0f80(1);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

