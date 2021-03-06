#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_errno.h>

/* function names generated by removing  "gsl_sf" from the beginning
   of the name.  Thus gsl_sf_bessel_J0 goes to bessel_J0. */


static int sf_mode[] = { GSL_PREC_DOUBLE, GSL_PREC_SINGLE, GSL_PREC_APPROX } ;

/* J series begins*/

void bessel_J0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_J0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_J1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_J1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Jn_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Jn_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Jn_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Jn_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/* J series ends*/
/* Y series begins*/

void bessel_Y0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Y0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Y1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Y1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Yn_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Yn_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Yn_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i=0 ; i< *len ; i++){
		status[i] = gsl_sf_bessel_Yn_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/* Y series ends*/
/* I series begins*/


void bessel_I0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_I0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_I1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_I1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_In_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_In_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_In_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_In_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/*I series ends*/
/* I_scaled series begins*/

void bessel_I0_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_I0_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

/* J series begins*/
/* J series begins*/

void bessel_I1_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_I1_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_In_scaled_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_In_scaled_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_In_scaled_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_In_scaled_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/* I_scaled series begins*/
/* K series begins*/

void bessel_K0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_K0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_K1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_K1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Kn_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Kn_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Kn_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Kn_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/* K series ends*/
/* K_scaled series begins*/

void bessel_K0_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_K0_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_K1_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_K1_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Kn_scaled_e(int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Kn_scaled_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Kn_scaled_array_e(const int *nmin, const int *nmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Kn_scaled_array(*nmin, *nmax, x[i], out+i*(*nmax - *nmin +1));
	}
}

/* K_scaled series ends */
/* j0 series begins */

void bessel_j0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_j0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_j1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_j1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_j2_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_j2_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_jl_e(int *l, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_jl_e(l[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_jl_array_e(int *lmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_jl_array(*lmax, x[i], out+i*(*lmax+1));
	}
}

void bessel_jl_steed_array_e(int *lmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_jl_steed_array(*lmax, x[i], out+i*(*lmax+1));
	}
}

void bessel_y0_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_y0_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_y1_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_y1_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_y2_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_y2_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_yl_e(int *l, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_yl_e(l[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_yl_array_e(int *lmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_yl_array(*lmax, x[i], out+i*(*lmax+1));
	}
}

/* yl series ends */
/* i_scaled series starts */

void bessel_i0_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_i0_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_i1_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_i1_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_i2_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_i2_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_il_scaled_e(int *l, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_il_scaled_e(l[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_il_scaled_array_e(int *lmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_il_scaled_array(*lmax, x[i], out+i*(*lmax +1));
	}
}

/* i_scaled series ends */
/* k_scaled series starts */

void bessel_k0_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_k0_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_k1_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_k1_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_k2_scaled_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_k2_scaled_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_kl_scaled_e(int *l, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_kl_scaled_e(l[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_kl_scaled_array_e(int *lmax, const double *x, const int *len, double *out, int* status)
{
	int i;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_kl_scaled_array(*lmax, x[i], out+i*(*lmax +1));
	}
}

/*k_scaled series ends */
/*Jnu series starts */

void bessel_Jnu_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Jnu_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_sequence_Jnu_e(double *nu, double *v, int *nv, int *mode, int *status)
{
	gsl_set_error_handler_off();
	*status=gsl_sf_bessel_sequence_Jnu_e(*nu, sf_mode[*mode], (size_t) *nv, v);
}  

void bessel_Ynu_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Ynu_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Inu_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Inu_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Inu_scaled_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Inu_scaled_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Knu_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Knu_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_lnKnu_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_lnKnu_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_Knu_scaled_e(double *nu, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_Knu_scaled_e(nu[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void bessel_zero_J0_e(unsigned int *s, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_zero_J0_e(s[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void bessel_zero_J1_e(unsigned int *s, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_zero_J1_e(s[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void bessel_zero_Jnu_e(double *nu, unsigned int *s, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_bessel_zero_Jnu_e(nu[i], s[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}
