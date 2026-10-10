
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f6c60(int param_1)

{
  float local_8;
  float local_4;
  
  local_4 = (*(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x564) * _DAT_006e95a8) -
            *(float *)(param_1 + 0x570) * _DAT_0075f810 * _DAT_006e936c;
  local_8 = (*(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x560) * _DAT_006efa88) -
            _DAT_0075f80c * *(float *)(param_1 + 0x570);
  if (*(float *)(param_1 + 0x564) < _DAT_0075f810 + local_4) {
    local_4 = (*(float *)(param_1 + 0x564) - _DAT_0075f810) - _DAT_006ef418;
  }
  FUN_004f6d00(&local_8,*(undefined4 *)(param_1 + 0x7d8));
  return;
}

