
void __thiscall FUN_004cf190(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4cd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_slider__OnAdvanceLogic_0072d5ec);
  local_4 = 0;
  if (param_1[0x65] == param_1[0x66]) goto LAB_004cf462;
  bVar5 = false;
  bVar4 = true;
  if (param_1[0x65] == 0) {
    fVar1 = DAT_006e92e8 - (float)param_1[0x67];
    param_1[0x68] = (int)(fVar1 * (float)param_1[0x58]);
    param_1[0x69] = (int)(fVar1 * (float)param_1[0x59]);
    param_1[0x6a] = (int)(fVar1 * (float)param_1[0x5a]);
    fVar1 = (float)param_1[0x67];
    param_1[0x68] = (int)(fVar1 * (float)param_1[0x5d] + (float)param_1[0x68]);
    param_1[0x69] = (int)(fVar1 * (float)param_1[0x5e] + (float)param_1[0x69]);
    param_1[0x6a] = (int)(fVar1 * (float)param_1[0x5f] + (float)param_1[0x6a]);
    if (param_1[0x62] == 0) {
      if ((float)param_1[0x60] <= (float)param_1[0x5b]) goto LAB_004cf28c;
      bVar4 = false;
    }
    else if ((float)param_1[0x5b] < (float)param_1[0x60]) {
LAB_004cf28c:
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (param_1[99] == 0) {
      if ((float)param_1[0x61] <= (float)param_1[0x5c]) goto LAB_004cf2bb;
      bVar5 = false;
    }
    else if ((float)param_1[0x5c] < (float)param_1[0x61]) {
LAB_004cf2bb:
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  if (param_1[0x65] == 1) {
    fVar1 = DAT_006e92e8 - (float)param_1[0x67];
    param_1[0x68] = (int)(fVar1 * (float)param_1[0x5d]);
    param_1[0x69] = (int)(fVar1 * (float)param_1[0x5e]);
    param_1[0x6a] = (int)(fVar1 * (float)param_1[0x5f]);
    fVar1 = (float)param_1[0x67];
    param_1[0x68] = (int)(fVar1 * (float)param_1[0x58] + (float)param_1[0x68]);
    param_1[0x69] = (int)(fVar1 * (float)param_1[0x59] + (float)param_1[0x69]);
    param_1[0x6a] = (int)(fVar1 * (float)param_1[0x5a] + (float)param_1[0x6a]);
    if (param_1[0x62] == 0) {
      if ((float)param_1[0x60] <= (float)param_1[0x5b]) goto LAB_004cf37d;
      bVar4 = true;
    }
    else if ((float)param_1[0x5b] < (float)param_1[0x60]) {
LAB_004cf37d:
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (param_1[99] == 0) {
      if ((float)param_1[0x61] <= (float)param_1[0x5c]) goto LAB_004cf3af;
      bVar5 = true;
    }
    else if ((float)param_1[0x5c] < (float)param_1[0x61]) {
LAB_004cf3af:
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  fVar1 = DAT_006e92e8 - (float)param_1[0x67];
  if (bVar4) {
    fVar2 = (float)param_1[0x5b];
    fVar3 = (float)param_1[0x60];
  }
  else {
    fVar2 = (float)param_1[0x60];
    fVar3 = (float)param_1[0x5b];
  }
  param_1[0x6b] = (int)(fVar3 * (float)param_1[0x67] + fVar1 * fVar2);
  if (bVar5) {
    fVar2 = (float)param_1[0x5c];
    fVar3 = (float)param_1[0x61];
  }
  else {
    fVar2 = (float)param_1[0x61];
    fVar3 = (float)param_1[0x5c];
  }
  param_1[0x6c] = (int)(fVar3 * (float)param_1[0x67] + fVar1 * fVar2);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x68,0);
  fVar1 = param_2 * (float)param_1[100] + (float)param_1[0x67];
  param_1[0x67] = (int)fVar1;
  if (DAT_006e92e8 <= fVar1) {
    param_1[0x65] = param_1[0x66];
  }
  FUN_004c0ce0(param_2);
LAB_004cf462:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

